import Polymorphism

def findLast? {α : Type} (xs : List α) : Option α :=
  match xs with
  | List.nil => Option.none
  | List.cons x List.nil => Option.some x
  | List.cons _ tl => findLast? tl

#eval findLast? [2, 3, 5, 7]
#eval findLast? (α := List Nat) []

def findFirst? {α : Type} (xs : List α) (predicate : α -> Bool) : Option α :=
  match xs with
  | List.nil => Option.none
  | List.cons x xs =>
    if predicate x then Option.some x
    else findFirst? xs predicate

def biggerThanFour (x : Nat) : Bool := x > 4

#eval findFirst? [2, 3, 5, 7] biggerThanFour
#eval findFirst? [1, 2, 3] biggerThanFour


def Prod.switch {α β : Type} (pair : α × β) : β × α :=
  {fst := pair.snd, snd := pair.fst}

-- def PetName : Type := String ⊕ String
-- -- Sum.inl - dog; Sum.inr - cat
-- def animals : List PetName :=
--   [Sum.inl "Spot", Sum.inr "Tiger", Sum.inl "Fifi",
--    Sum.inl "Rex", Sum.inr "Floof"]

inductive PetName where
  | dog : String -> PetName
  | cat : String -> PetName

def animals : List PetName :=
  [PetName.dog "Spot", PetName.cat "Tiger", PetName.dog "Fifi",
  PetName.dog "Rex", PetName.cat "Floof"]

def howManyDogs (pets : List PetName) : Nat :=
  match pets with
  | List.nil => Nat.zero
  | List.cons (PetName.dog _) tl => Nat.succ (howManyDogs tl)
  | List.cons _ tl => howManyDogs tl

#eval howManyDogs animals

def zip {α β : Type} (xs : List α) (ys : List β) : List (α × β) :=
  match xs, ys with
  | List.nil, _ => List.nil
  | _, List.nil => List.nil
  | List.cons x xs', List.cons y ys' => List.cons (x, y) (zip xs' ys')

#eval zip [1, 2, 3] ["A", "B"]
#eval zip (β := String) [1, 2, 3] []
#eval zip [1] ["A", "B"]
#eval zip (α := Nat) [] ["A", "B"]

def take {α : Type} (n : Nat) (xs : List α) : List α :=
  match n, xs with
  | Nat.zero, _ => List.nil
  | Nat.succ n', List.cons x xs' => List.cons x (take n' xs')
  | _, _ => List.nil

#eval take 3 ["bolete", "oyster"] == ["bolete", "oyster"]
#eval take 1 ["bolete", "oyster"] == ["bolete"]

def distrib {α β γ : Type} (x : α × (β ⊕ γ)) : (α × β) ⊕ (α × γ) :=
  match x with
  | (a, Sum.inl b) => Sum.inl (a, b)
  | (a, Sum.inr g) => Sum.inr (a, g)

#eval distrib (γ := String) (42, Sum.inl "A")
#eval distrib (β := String) (42, Sum.inr "A")

 -- Empty behaves like 0
#eval distrib (γ := Empty) (42, Sum.inl "A")
#eval distrib (β := Empty) (42, Sum.inr "A")

def multTwo {α : Type} (x : Bool × α) : α ⊕ α :=
  match x with
  | (true, n) => Sum.inl n
  | (false, n) => Sum.inr n
