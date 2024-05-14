generarLista x = [2..x]

-- Guardias (Guards)
verificarNumeroPrimo x y
    | x == 2 = True
    | mod x y == 0 = False
    | x <= 1 = False
    | y < 3 = True
    | otherwise = verificarNumeroPrimo x (y - 1)

esPrimo x = verificarNumeroPrimo x (x - 1)

listaPrimos = filter esPrimo

solucion = listaPrimos . generarLista


main :: IO()
main = do 
    n <- readLn :: IO Integer
    putStrLn $ show (solucion n)