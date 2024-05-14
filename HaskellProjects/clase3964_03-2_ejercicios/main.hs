import Test.QuickCheck
promedio x y z = (x + y + z) / 3

pruebaPromedio :: Double -> Double -> Double -> Bool
pruebaPromedio x y z = promedio x y z == (x + y + z) / 3

sumaMonedas x y z = x*200 + y*500 + z*1000

ultimaCifra x = rem x 10

aproximar x y z = round (promedio x y z)

palindromo xs = xs == reverse xs

rotar xs = tail xs ++ [head xs]

lista1 = [4, 30, 7, 12, 9]

main :: IO()
main = do
    a <- readLn :: IO Double
    b <- readLn :: IO Double
    c <- readLn :: IO Double
    
    putStrLn $ "promedio: " ++ show (promedio a b c)
    --quickCheck pruebaPromedio
    putStrLn $ "sumaMonedas: " ++ show (sumaMonedas a b c)
    putStrLn $ "ultimaCifra: " ++ show (ultimaCifra 123)
    putStrLn $ "aproximar: " ++ show (aproximar a b c)
    putStrLn $ "palindromo: " ++ show (palindromo "lol")
    putStrLn $ "rotar: " ++ show (rotar lista1)
    