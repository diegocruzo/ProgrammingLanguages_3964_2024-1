-- Importar biblioteca para realizar pruebas de validación
import Test.QuickCheck

-- Función que se va a evaluar con pruebas
cuadrado :: Num a => a -> a
cuadrado x = x * x

-- Función que realiza las pruebas
propCuadrado :: Double -> Bool
propCuadrado x = cuadrado x == x * x

-- Función que multiplica tres (3) números
multiplicarTres :: Num a => a -> a -> a -> a -- Declaración de tipo de dato
multiplicarTres x y z = x * y * z 


main :: IO()
main = do
    --putStrLn "Ejecutando pruebas para la función 'cuadrado':"
    --quickCheck propCuadrado
    -- Leer variables desde consola
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    
    putStrLn $ "El cuadrado de " ++ show a ++ " es " ++ show (cuadrado a)
    putStrLn $ "multiplicarTres: " ++ show (multiplicarTres a b c)
    
    -- Currificaciòn
    -- Crear funciones al vuelo
    let multiplicaDosConSiete = multiplicarTres 7 -- Esta es una función de orden superior
    putStrLn $ "multiplicaDosConSiete: " ++ show (multiplicaDosConSiete a b)
    
    let multiplicaPorCatorce = multiplicaDosConSiete 2
    putStrLn $ "multiplicaPorCatorce: " ++ show(multiplicaPorCatorce c)
    
    

