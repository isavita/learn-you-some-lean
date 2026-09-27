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
