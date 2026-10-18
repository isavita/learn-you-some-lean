structure Pos where
  succ ::
  pred : Nat

#eval Pos.succ 1

def Pos.plus : Pos -> Pos -> Pos
  | Pos.succ n, Pos.succ m => Pos.succ (n + m + 1)

#eval Pos.plus (Pos.succ 1) (Pos.succ 5)

instance : Add Pos where
  add := Pos.plus

#eval Pos.succ 4 + Pos.succ 2
#eval Pos.succ 0 + Pos.succ 0

def Pos.mul : Pos -> Pos -> Pos
  | Pos.succ n, Pos.succ m => Pos.succ (n * m + m + n)

#eval Pos.mul (Pos.succ 4) (Pos.succ 2)

instance : Mul Pos where
  mul := Pos.mul

#eval (Pos.succ 5) * (Pos.succ 3)
#eval (Pos.succ 0) * (Pos.succ 0)

def Pos.toNat : Pos -> Nat
  | Pos.succ n => n + 1

#eval (Pos.succ 4).toNat

instance : ToString Pos where
  toString x := toString x.toNat

#eval (Pos.succ 5) * (Pos.succ 3)

instance : OfNat Pos 1 where
  ofNat := Pos.succ 0

#eval (1 : Pos).toNat

example (x y : Pos) : (x + y).toNat = x.toNat + y.toNat := by
  cases x with
  | succ n =>
    cases y with
    | succ m =>
      simp only [Pos.toNat, Pos.plus]
      omega

example (x y : Pos) : (x * y).toNat = x.toNat * y.toNat := by
  cases x with
  | succ n =>
    cases y with
    | succ m =>
      show (Pos.mul (Pos.succ n) (Pos.succ m)).toNat
         = (Pos.succ n).toNat * (Pos.succ m).toNat
      simp only [Pos.mul, Pos.toNat]
      simp only [Nat.mul_succ, Nat.succ_mul]
      omega

-- 3.1.6.2. Even Numbers🔗
-- Define a datatype that represents only even numbers.
-- Define instances of Add, Mul, and ToString that allow it to be used conveniently.
-- OfNat requires a feature that is introduced in the next section.
inductive Even : Type where
  | two : Even
  | succ : Even -> Even

def eight := Even.succ (Even.succ (Even.succ Even.two))

#eval eight

def Even.add : Even -> Even -> Even
  | Even.two, n => Even.succ n
  | Even.succ k, n => Even.succ (Even.add k n)

#eval Even.add eight eight

instance : Add Even where
  add := Even.add

#eval eight + eight

def Even.mul : Even -> Even -> Even
  | Even.two, n => n + n
  | Even.succ k, n => n + n + Even.mul k n

open Even (two)

#eval Even.mul two eight

instance : Mul Even where
  mul := Even.mul

#eval two * eight

def evenToString (e : Even) : String :=
  match e with
    | two => "||"
    | Even.succ k => "||" ++ evenToString k

#eval evenToString eight

instance : ToString Even where
  toString := evenToString

#eval two * eight

def Even.toNat : Even -> Nat
  | two => 2
  | Even.succ k => 2 + toNat k

def evenToBase10String (e : Even) : String :=
  toString e.toNat

instance : ToString Even where
  toString := evenToBase10String

#eval eight * (two + two + two)

def Nat.toBinary : Nat -> String
  | 0 => "0"
  | 1 => "1"
  | n@(_ + 2) => Nat.toBinary (n / 2) ++ toString (n % 2)

def evenToBase2String (e : Even) : String :=
  e.toNat.toBinary

instance : ToString Even where
  toString := evenToBase2String

#eval eight
#eval eight + two
#eval two * eight
