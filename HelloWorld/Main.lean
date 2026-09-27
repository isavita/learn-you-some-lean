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
