package Animals;

import ParentClasses.Mamifero;
import ParentClasses.Animal;

public class Perro extends Mamifero implements Animal {
    // Constructor
    public Perro(String nombre){
        super(nombre);
    }

    @Override
    public void expresarse() {
        System.out.println("Guau");
    }

    @Override
    public String recorridoEnMetrosPorSegundo() {
        return "¡Corro 2 metros en un segundo!";
    }

    @Override
    public void alimentarse(String tipo) {
        if (tipo.equals("hogareño")){
            System.out.println("Vivo en un hogar, me alimento de concentrado");
        }
        else if (tipo.equals("callejero")){
            System.out.println("Me alimento de lo que encuentro en la calle");
        }
        else {
            System.out.println("No han definido de qué me alimento");
        }
    }
}
