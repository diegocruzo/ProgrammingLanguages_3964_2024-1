palindromo xs = xs == reverse xs

main :: IO()
main = do 
    cadena <- getLine -- Entregarle toda la línea a la variable "cadena"
    let lista = map read (words cadena) :: [Int]
    putStrLn $ show (words cadena)
    putStrLn $ show lista
    putStrLn $ show (palindromo lista)
    