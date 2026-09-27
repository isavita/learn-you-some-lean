import FunctionsAndDefinitions

def joinStringsWith (j : String) (s1 : String) (s2 : String) :=
  String.append s1 (String.append j s2)

#eval joinStringsWith ", " "one" "and another"

#check joinStringsWith

def volume (height : Nat) (width : Nat) (depth : Nat) : Nat :=
  height * width * depth

#check volume

#eval volume 4 10 2

def Str : Type := String

def aStr : Str := "This is a string."

#check aStr

def NaturalNumber : Type := Nat

def thirtyEight : NaturalNumber := (38 : Nat)

abbrev N : Type := Nat

def fortyTwo : N := 42
