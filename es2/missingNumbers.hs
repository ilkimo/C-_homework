split :: [Int] -> ([Int], [Int])
split []           = ([], [])
split [x]          = ([x], [])
split (x : y : xs) = (x : ys, y : zs)
    where
        (ys, zs) = split xs

merge :: [Int] -> [Int] -> [Int]
merge []       ys = ys
merge xs       [] = xs
merge (x : xs) (y : ys) | x <= y    = x : merge xs (y : ys)
                        | otherwise = y : merge (x : xs) ys

mergeSort :: [Int] -> [Int]
mergeSort []  = []
mergeSort [x] = [x]
mergeSort xs  = merge (mergeSort ys) (mergeSort zs)
    where
        (ys, zs) = split xs

missingNumbers :: [Int] -> [Int]
missingNumbers [] = []
missingNumbers (x : []) = []
missingNumbers xs = solveProblem (mergeSort xs)

solveProblem :: [Int] -> [Int]
solveProblem xs = intersect [(head xs)..(last xs)] xs

intersect :: [Int] -> [Int] -> [Int]
intersect [] _ = []
intersect (x : []) [] = x : []
intersect (x:xs) l | elem x l = intersect xs (tail l)
                   | otherwise = x : intersect xs l