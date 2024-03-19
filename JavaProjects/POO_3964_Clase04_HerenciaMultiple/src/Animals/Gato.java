package Animals;

import ParentClasses.Mamifero;
import ParentClasses.Animal;

public class Gato extends Mamifero implements Animal {
    // Constructor
    public Gato(String nombre){
        super(nombre);
    }

    @Override
    public void expresarse() {
        System.out.println("Miau");
    }

    @Override
    public String recorridoEnMetrosPorSegundo() {
        return "¡Corro 4 metros en un segundo!";
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
