import Greeting

def main : IO Unit := do
  let stdin <- IO.getStdin
  let input <- stdin.getLine
  let name := input.trimAscii

  IO.println s!"Hello, {name}, with {Expression.happy}!"
