-- Función para determinar si un número es par 
esPar :: Integer -> Bool -- Se define en la función, el tipo de dato que se recibe y el que entrega
esPar n = n `mod` 2 == 0

-- Ejecución de la función principal
main :: IO()
main = do
    putStrLn "Ingrese un número: "
    num <- readLn :: IO Integer -- Se recibe un dato desde consola de tipo entero
    if esPar num
        then putStrLn $ show num ++ " es un número par."
        else putStrLn $ show num ++ " es un número impar."
