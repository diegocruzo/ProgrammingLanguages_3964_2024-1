-- Creación de funciones
--doble
doble x = x + x


--cuadrado :: Integer -> Integer
cuadrado x = x * x

--sumaDos :: Integer -> Integer -> Integer
sumaDos x y = x + y


main :: IO()
main = do
    a <- readLn :: IO Integer
    b <- readLn :: IO Integer
    putStrLn $ show a ++ " + " ++ show b ++ " = " ++ show (a + b)
    putStrLn $ show a ++ " + " ++ show b ++ " = " ++ show (sumaDos a b)
    putStrLn $ show b ++ " al cuadrado es: " ++ show (cuadrado b)

    
