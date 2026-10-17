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
