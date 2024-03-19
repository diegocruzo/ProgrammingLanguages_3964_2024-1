public class Mamifero {
    // Propiedad dada por encapsulamiento
    private String nombre;
    // Constructor
    public Mamifero(String nombre){
        this.nombre = nombre;
    }
    public Mamifero(){
        this.nombre = "Por definir";
    }

    // Método para todos los mamíferos
    public void Expresarse(){
        System.out.println("Por definir");
    }

    // Setters y Getters
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
}
