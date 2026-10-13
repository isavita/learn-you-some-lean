import InterludePropositionsProofsIndexing

theorem twoPlusThreeEqualFive : 2 + 3 = 5 := rfl
theorem fifteenMinusEightEqualSeven : 15 - 8 = 7 := rfl

theorem append : "Hello, ".append "World!" = "Hello, World!" := rfl

-- this doesn't work because rfl (reflexivity) for proving equality
-- theorem fiveSmallerThanEighteen : 5 < 18 := rfl

-- this two computation result in the same value thus rfl can be used
theorem computationResultsAreSame : ["a", "b", "c"].length = 3 := rfl

theorem TwoPlusThreeEqualFive : 2 + 3 = 5 := by decide
theorem FifteenMinusEightEqualSeven : 15 - 8 = 7 := by decide

theorem Aappend : "Hello, ".append "World!" = "Hello, World!" := by decide

theorem fiveSmallerThanEighteen : 5 < 18 := by decide

def fifth (xs : List α) (ok : xs.length > 4) : α := xs[4]

#eval fifth [1, 2, 3, 4, 5, 6, 7] (by decide)
