#eval 42 + 19
#eval String.append "Hello" (String.append ", " "World!")

#eval (1 + 2 : Nat)
#eval (1 - 2 : Nat)
#eval (1 - 2 : Int)
#check (1 - 2 : Int)

-- #check String.append ["hello", " "] "world"

def hello := "Hello"

def lean : String := "Lean"

#eval String.append (String.append hello (String.append ", " lean)) "!"

def name : String := "Alex"

#eval String.append (String.append hello ", ") name

def add1 (n : Nat) : Nat := n + 1

#eval add1 54

def maximum (a : Nat) (b : Nat) : Nat :=
  if a > b then a else b

#eval maximum 7 24

def spaceBetween (before : String) (after : String) : String :=
  String.append before (String.append " " after)

#eval spaceBetween hello lean

#eval maximum (3 + 10) (2 * 7)

#check spaceBetween "Hello "

def N : Type := Nat

def fortyTwo : N := (42 : Nat)

#check 1.2

#check -45.3243241321

#check 0.0

#check 0

#check (0 : Float)

structure Point where
  point ::
  x : Float
  y : Float

def origin : Point := { x := 0.0, y := 0.0 }

#eval origin.x
#eval origin.y

def addPoints (p1 : Point) (p2 : Point) : Point :=
  { x := p1.x + p2.x, y := p1.y + p2.y }

#eval addPoints { x := 3.42, y := -32 } { x := 2.01, y := 3 }

def distance (p1 : Point) (p2 : Point) : Float :=
  Float.sqrt ((p2.x - p1.x) ^ 2 + (p2.y - p1.y) ^ 2)

#check distance

#eval distance { x := 1, y := 2 } { y := -1, x := 5.0 }

structure Point3D where
  x : Float
  y : Float
  z : Float

def origin3D : Point3D :=
  { x := 0.0, y := 0.0, z := 0.0 }

#check { y := 0.0, x := 0.0 : Point }

def zeroX (p : Point) : Point :=
  { x := 0, y := p.y }

#eval zeroX { x := 4, y := 7 }

def zerox (p : Point) : Point :=
  { p with x := 0 }

#eval zerox { x := 4, y := 7}

#check zerox

def sixAndSeven : Point :=
  { x := 6.7, y := 7.6 }

#eval sixAndSeven

#eval zerox sixAndSeven

#eval sixAndSeven

#check (Point.x)
#check (Point.y)

#eval "one string".append " and another"

def Point.modifyBoth (f : Float -> Float) (p : Point) : Point :=
  { x := f p.x, y := f p.y }

#eval Point.modifyBoth Float.sqrt { x := 355/113, y := 4 }
#eval { x := 355/113, y := 4 : Point }.modifyBoth Float.sqrt
#eval ({ x := 355/113, y := 4 } : Point).modifyBoth Float.sqrt

#check Bool

def normSq (p : Point) : Float :=
  match p with
  | .point x y  => x * x + y * y

#eval normSq { x := 355/113, y := 4 }


inductive Shape where
  | circle (r : Float)
  | rectangle (w : Float) (h : Float)

def area : Shape -> Float
  | .circle r => 3.14 * r * r
  | .rectangle w h => w * h

-- Recursive DataTypes
inductive MyNat where
  | zero : MyNat
  | succ : MyNat -> MyNat

def one : MyNat := .succ .zero
def two : MyNat := .succ one

inductive MyList (a : Type) where
  | nil : MyList a
  | cons : a -> MyList a -> MyList a

#check MyNat.succ (MyNat.succ (MyNat.succ (MyNat.succ MyNat.zero))) -- 4

def isZero (n : MyNat) : Bool :=
  match n with
  | MyNat.zero => true
  | MyNat.succ _ => false

#eval isZero (MyNat.succ MyNat.zero)
#eval isZero MyNat.zero

#eval Nat.pred 5
#eval Nat.succ 5

#eval Nat.pred 0

def pred (n : MyNat) : MyNat :=
  match n with
  | MyNat.zero => MyNat.zero
  | MyNat.succ k => k

#eval pred (pred (pred (MyNat.succ (MyNat.succ MyNat.zero))))

def depth (p : Point3D) : Float := p.z
  -- match p with
  -- | {x := _, y := _, z := z} => z

#eval depth { x := 3, y := 4, z := -2 }

def even (n : MyNat) : Bool :=
  match n with
  | MyNat.zero => false
  | MyNat.succ MyNat.zero => false
  | MyNat.succ k => not (even k)

#eval even two
#eval even one
#eval even MyNat.zero


def plus (n : MyNat) (k : MyNat) : MyNat :=
  match n with
  | MyNat.zero => k
  | MyNat.succ n' => plus n' (MyNat.succ k)

#eval plus one two
#eval plus MyNat.zero one
#eval plus one MyNat.zero
#eval plus MyNat.zero MyNat.zero

def times (n : MyNat) (k : MyNat) : MyNat :=
  match k with
  | MyNat.zero => MyNat.zero
  | MyNat.succ MyNat.zero => n
  | MyNat.succ k' => plus n (times n k')

#eval times two two
#eval times two MyNat.zero
#eval times MyNat.zero two

def sub (n : MyNat) (k : MyNat) : MyNat :=
  match k with
  | MyNat.zero => n
  | MyNat.succ k' =>
    match n with
    | MyNat.zero => MyNat.zero
    | MyNat.succ n' => sub n' k'

#eval sub two two
#eval sub two one
#eval sub two MyNat.zero
#eval sub one two

def minus (n : MyNat) (k : MyNat) : MyNat :=
  match k with
  | MyNat.zero => n
  | MyNat.succ k' => pred (minus n k')

#eval minus two two
#eval minus two one
#eval minus two MyNat.zero
#eval minus one two

structure PPoint (α : Type) where
  x : α
  y : α

def natOrigin : PPoint Nat :=
  { x := Nat.zero, y := Nat.zero }

def replaceX (α : Type) (p : PPoint α) (newX : α) : (PPoint α) :=
  { p with x := newX }

def start : PPoint Float := { x := 5.6, y := -11 }

#eval replaceX Float start 3.14

#check (replaceX)
#check replaceX Nat
#check replaceX Nat natOrigin
#check replaceX Nat natOrigin 8

inductive Sign where
  | pos
  | neg

def posOrNegThree (s : Sign) : match s with | Sign.pos => Nat | Sign.neg => Int :=
  match s with
  | Sign.pos => (3 : Nat)
  | Sign.neg => (-3 : Int)

#eval posOrNegThree Sign.pos
#eval posOrNegThree Sign.neg

def primesUnder10 := [2, 3, 5, 7]
def explicitPrimesUnder10 : List Nat :=
  List.cons 2 (List.cons 3 (List.cons 5 (List.cons 7 List.nil)))

#eval primesUnder10
#eval explicitPrimesUnder10

def length (α : Type) (xs : List α) : Nat :=
  match xs with
  | List.nil => Nat.zero
  | List.cons _ tl => Nat.succ (length α tl)

def llength {α : Type} (xs : List α) : Nat :=
  match xs with
  | [] => 0
  | _ :: tl => Nat.succ (llength tl)

#eval length String ["A", "B", "C"]
#eval llength ["A", "B", "C"]
#eval llength primesUnder10

#check List.length (α := Float)

inductive Opt (α : Type) : Type where
  | none : Opt α
  | some (val : α) : Opt α

#check (Opt Int)

#eval List.head? [1]

def List.h? {α : Type} (xs : List α) : Option α :=
  match xs with
  | [] => none
  | y :: _ => some y


#eval List.h? (α := Int) []
#eval List.head! [1]
#eval List.headD (α := Int) [] 42

#eval [111].head?
#eval [].head? (α := Int)
#eval ([] : List Int).head?
#eval ([] : List Nat)

def fives : String × Nat := { fst := "five", snd := 5 }

#eval fives.fst
#eval fives.snd


def seconds : String × Nat := ("two", 2)

#eval seconds.fst

def sevens : String × Int × Nat := ("VII", 7, 4 + 3)
def ssevens : String × (Int × Nat) := ("VII", (7, 4 + 3))

#eval sevens == ssevens

def petName : Type := String ⊕ String

def animals : List petName :=
  [Sum.inl "Spot", Sum.inr "Tiger", Sum.inl "Fifi",
  Sum.inl "Rex", Sum.inr "Floof"]

def howManyDogs (pets : List petName) : Nat :=
  match pets with
  | List.nil => Nat.zero
  | List.cons (Sum.inl _) tl => Nat.succ (howManyDogs tl)
  | List.cons (Sum.inr _) tl => howManyDogs tl

def howManyCats (pets : List petName) : Nat :=
  match pets with
  | [] => 0
  | Sum.inr _ :: tl => 1 + howManyCats tl
  | Sum.inl _ :: tl => howManyCats tl

#eval howManyDogs animals
#eval howManyCats animals

#check Unit

#check Empty

def sameLength (xs : List α) (ys : List β) : Bool :=
  match xs with
  | [] =>
    match ys with
    | [] => true
    | _ :: _ => false
  | _ :: xs' =>
    match ys with
    | _ :: ys' => sameLength xs' ys'
    | [] => false

#eval sameLength animals primesUnder10

inductive WoodSplittingTools where
  | axe
  | maul
  | froe
deriving Repr

#eval WoodSplittingTools.axe

def allTools : List WoodSplittingTools := [
  WoodSplittingTools.axe,
  WoodSplittingTools.maul,
  WoodSplittingTools.froe
]

#eval allTools

#eval "Hello, " ++ "world!"
#eval String.push "Hello" '!'
#eval "Hello".push '!'

#eval (("small tortoiseshell".drop 6).dropEnd 5).copy

#eval String.Slice.isEmpty ""
#check "small"

#eval "red admiralll".dropEndWhile 'l'
#eval "the the butterfly".dropWhile "the "
#eval ("a gray grayling".drop 2).dropWhile "gray "
#eval ("red admiral".dropEndWhile Char.isAlpha).copy
#eval ("red admiral".dropEndWhile Char.isAlpha).copy ++ "!"


def reverse : List α -> List α
  | [] => []
  | a :: tl => (reverse tl) ++ [a]

def reverseEff {α : Type} (xs : List α) : List α :=
  let rec rev (xs ys : List α) : List α :=
    match xs with
      | [] => ys
      | a :: tl => rev tl (a :: ys)
  rev xs []


#eval reverse [1, 2, 3, 4]
#eval reverseEff [1, 2, 3, 4]

def unzip : List (α × β) -> (List α) × (List β)
  | [] => ([], [])
  | (x, y) :: xys =>
    let (xs, ys) := unzip xys
    (x :: xs, y :: ys)

#eval unzip [(1, 2), (3, 4), (5, 6)]

#check fun x => 2 * x
#check fun (x : Float) => 2 * x

#check fun
  | 0 => none
  | n + 1 => some n

#check (. + 1)

#eval (. * .) 5 4

def WhatEver.double (x : Nat) : Nat := 2 * x

namespace WhatEver
def triple (x : Nat) : Nat := 3 * x
end WhatEver

#eval WhatEver.double 3
#eval WhatEver.triple 3

#eval (⟨1, 2, 3⟩ : Point3D)

#eval s!"3 * 5 = {WhatEver.triple 5}"

def threeTimes (action : IO Unit) : IO Unit := do
  action
  action
  action

#eval threeTimes (IO.println "Say 3!")

def nTimes (action : IO Unit) : Nat -> IO Unit
  | Nat.zero => pure ()
  | Nat.succ n => do
    action
    nTimes action n

#eval nTimes (IO.println "Say!") 10

def countdown : Nat -> List (IO Unit)
  | Nat.zero => [IO.print "Blast off!"]
  | Nat.succ n' => IO.print s!"{n' + 1}\n" :: countdown n'

def runActions :  List (IO Unit) -> IO Unit
  | [] => pure ()
  | action :: actions => do
    action
    runActions actions

#eval runActions (countdown 10)

def getNumA : IO Nat := do
  (<- IO.getStdout).putStrLn "A"
  pure 5

def getNumB : IO Nat := do
  (<- IO.getStdout).putStrLn "B"
  pure 7

#eval getNumA
#eval getNumB

def testNumAB : IO Unit := do
  let x ← getNumA
  let y ← getNumB
  let a : Nat := if x == 5 then 0 else y
  (← IO.getStdout).putStrLn s!"The answer is {a}"

#eval testNumAB

def onlyWhiteSpaces : IO Unit := do
  let stdin <- IO.getStdin
  let stdout <- IO.getStdout

  stdout.putStrLn "How would you like to be addressed?"
  let name := (<- stdin.getLine).trimAscii
  stdout.putStrLn s!"Hello, {name}!"

#eval onlyWhiteSpaces

def asExplicitAsPosible : IO Unit := do {
  let stdin <- IO.getStdin;
  let stdout <- IO.getStdout;

  stdout.putStrLn "How would you like to be addressed?";
  let name := (<- stdin.getLine).trimAscii;
  stdout.putStrLn s!"Hello, {name}!";
}

#eval asExplicitAsPosible

def withSemicolon : IO Unit := do
  let stdin <- IO.getStdin; let stdout <- IO.getStdout

  stdout.putStrLn "How would you like to be addressed?"
  let name := (<- stdin.getLine).trimAscii
  stdout.putStrLn s!"Hello, {name}!"

#eval withSemicolon

-- reflexive
-- TACTICS
-- decide
-- simp - simplify
-- grind

theorem onePlusOneIsTwo : 1 + 1 = 2 := by
  decide

#check onePlusOneIsTwo

theorem addAndAppend : 1 + 1 = 2 ∧ "Str".append "ing" = "String" := by
  decide

theorem addOrAppend : 4 + 1 = 5 ∨ "Str".append "in" = "String" := by
  decide

theorem notTwoEqualFour : ¬(1 + 1 = 4) := by
  decide

theorem falseOrTrue : False ∨ True := by decide
theorem falseImpliesTrue : False → True := by decide

def second (xs : List α) (ok : xs.length > 1) : α := xs[1]

-- decide (decidable proposition) - one where an algorithm can compute true/false
#eval second ["a", "c", "b"] (by decide)

#eval second [1] (by decide)

def thirdOption (xs : List α) : Option α := xs[2]?

#eval thirdOption [11, 22, 33]

#eval thirdOption (α := Nat) []

inductive Pos : Type where
  | one : Pos
  | succ : Pos -> Pos

def three : Pos := Pos.succ (Pos.succ Pos.one)

-- def seven : Pos := 7

-- def six : Pos := three + three

class Plus (α : Type) where
  plus : α -> α -> α

instance : Plus Nat where
  plus := Nat.add

#eval Plus.plus 3 2

open Plus (plus)

#eval plus 6 4

def Pos.plus : Pos -> Pos -> Pos
    | one, k => Pos.succ k
    | Pos.succ n, k => Pos.succ (n.plus k)

instance : Plus Pos where
  plus := Pos.plus

instance : Add Pos where
  add := Pos.plus

def six : Pos := plus three three

def Pos.toNat : Pos -> Nat
  | Pos.one => 1
  | Pos.succ n => n.toNat + 1

#eval six

#eval six.toNat

instance : ToString Pos where
  toString x := toString x.toNat

#eval s!"There are {six}"

def Pos.mul : Pos -> Pos -> Pos
  | Pos.one, k => k
  | Pos.succ n, k => (n.mul k) + k

instance : Mul Pos where
  mul := Pos.mul

#eval [six * three,
three * three * three * Pos.succ Pos.one]

instance : One Pos where
  one := Pos.one

instance : OfNat Pos 1 := ⟨Pos.succ Pos.one⟩

instance [OfNat Pos n] : OfNat Pos (n + 1) where
  ofNat := Pos.succ ((OfNat.ofNat n) + 1)


#eval (1 : Pos) * ((1 : Pos) + 1)

#check (IO.println)
#check @IO.println
#check IO.println

def List.sumOfContents {α : Type} [Add α] [Zero α] : List α -> α
  | [] => 0
  | x :: xs => x + xs.sumOfContents

def fiveNats : List Nat := [4, 5, 21, 11, 8]

#eval fiveNats.sumOfContents
#eval fiveNats.sum

def fourPos : List Pos := [1, 2, 3, 4]

-- #eval fourPos.sumOfContents

instance [Add α] : Add (PPoint α) where
  add p1 p2 := { x := p1.x + p2.x, y := p1.y + p2.y }
