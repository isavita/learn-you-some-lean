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

def div (n : Nat) (k : Nat) : Nat :=
  if n < k then
    Nat.zero
  else Nat.succ (div (n - k) k)
