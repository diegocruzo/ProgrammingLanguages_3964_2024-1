import Animals.Perro;
import Animals.Gato;

public class Main {
    public static void main(String[] args) {
        Perro max = new Perro("Max");
        System.out.println("Nombre del animal: " + max.getNombre());
        max.expresarse();
        max.alimentarse("hogareño");
        System.out.println(max.recorridoEnMetrosPorSegundo()); // Método con retorno, dentro de un contexto de ejecución
        max.amamantar();

        Gato michi = new Gato("Michi");
        System.out.println("Nombre del animal: " + michi.getNombre());
        michi.expresarse();
        michi.alimentarse("callejero");
        System.out.println(michi.recorridoEnMetrosPorSegundo()); // Método con retorno, dentro de un contexto de ejecución
        michi.amamantar();
    }
}
