def bufsize : USize := 20 * 1024

partial def dump (stream : IO.FS.Stream) : IO Unit := do
  let buf <- stream.read bufsize
  if buf.isEmpty then
    pure ()
  else
    let stdout <- IO.getStdout
    stdout.write buf
    dump stream

def fileStream (filename : System.FilePath) : IO (Option IO.FS.Stream) := do
  if not (<- filename.pathExists) then
    (<- IO.getStderr).putStrLn s!"File not found: {filename}"
    pure none
  else
    let handle <- IO.FS.Handle.mk filename IO.FS.Mode.read
    pure (some (IO.FS.Stream.ofHandle handle))

def process (exitCode : UInt32) (args : List String) : IO UInt32 := do 
  match args with
    | [] => pure exitCode
    | "-" :: rest => 
      dump (<- IO.getStdin)
      process exitCode rest
    | filename :: rest =>
      match <- fileStream filename with
        | none => pure 1
        | some stream =>
          dump stream
          process exitCode rest

def help : IO UInt32 := do
  IO.println "usage: feline [-] [file ...]"
  pure 0

def main (args : List String) : IO UInt32 :=
  match args with
  | [] => process 0 ["-"]
  | "--help" :: _ => help
  | _ => process 0 args

-- TESTS

def stringToStream (s : String) : IO IO.FS.Stream := do
  let bytes := s.toUTF8
  let posRef <- IO.mkRef (0 : Nat)
  let read (n : USize) : IO ByteArray := do
    let pos <- posRef.get
    let remaining := bytes.size - pos
    let take := min n.toNat remaining
    let newPos := (pos + take)
    posRef.set newPos 
    pure (bytes.extract pos newPos)

  pure {
    read := read
    getLine := pure ""
    write := fun _ => pure ()
    putStr := fun _ => pure ()
    flush := pure ()
    isTty := pure false
  }

def testDump : IO Unit := do
  let stream <- stringToStream "This is short message!"
  dump stream 

def testFileStream : IO Unit := do
  let filename := "a_random_test_file.txt"
  IO.FS.writeFile filename "line 1\nline 2\nline 3"
  match <- fileStream filename with
    | none => IO.println "The test for reading file failed"
    | some _ => IO.println "The file read was successful"
  IO.FS.removeFile filename

def testFileStreamDoesNotExist : IO Unit := do
  match <- fileStream "does_not_exist.txt" with
    | none => IO.println "Handle correctly file that doesn't exist"
    | some _ => IO.println "Something is wrong"

#eval testDump
#eval testFileStream
#eval testFileStreamDoesNotExist
