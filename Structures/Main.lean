structure RectangularPrism where
  height : Float
  width : Float
  depth : Float
  myVolume : Float := height * width * depth

def RectangularPrism.volume (r : RectangularPrism) : Float :=
  r.height * r.width * r.depth

#eval RectangularPrism.volume {height := 2, width := 3, depth := 5}
#eval {height := 2, width := 3, depth := 5 : RectangularPrism}.volume
#eval {height := 2, width := 3, depth := 5 : RectangularPrism}.myVolume

structure Point where
  x : Float
  y : Float

structure Segment where
  p1 : Point
  p2 : Point

def Segment.length (s : Segment) : Float :=
  ((s.p2.x - s.p1.x) ^ 2 + (s.p2.y - s.p1.y) ^ 2) ^ 0.5

#check (Segment.length)

-- RectangularPrism
-- RectangularPrism.mk
-- RectangularPrism.height
-- RectangularPrism.width
-- RectangularPrism.depth

structure Hamster where
  name : String
  fluffy : Bool

-- Hamster
-- Hamster.mk
-- Hamster.name
-- Hamster.fluffy

#check Hamster
#check Hamster.mk
#check Hamster.name
#check Hamster.fluffy

structure Book where
  makeBook ::
  title : String
  author : String
  price : Float

-- Book
-- Book.title
-- Book.author
-- Book.price

#check Book
#check Book.makeBook
#check Book.title
#check Book.author
#check Book.price
