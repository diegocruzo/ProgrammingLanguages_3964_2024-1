package ParentClasses;

public class Mamifero {
    // Propiedades de la clase
    private String nombre;
    // Constructor
    public Mamifero(String nombre){
        this.nombre = nombre;
        System.out.println("\nHa creado un mamífero llamado " + nombre);
    }
    // Método propio de la clase "Mamifero"
    public void amamantar() {
        System.out.println("Tomo leche proveniente de mi madre.");
    }

    // Getter y Setter
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
}
