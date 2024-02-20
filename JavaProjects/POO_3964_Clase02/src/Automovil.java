// Abstracción: Crear una clase a partir de propiedades y métodos
public class Automovil {
    // Encapsulamiento: Administrar los parámetros ùnicamente al interior
    // de la clase o de la instancia generada
    private String marca, modelo, color;
    private static short cilindraje; // El parámetro static comparte el valor otorgado a la propiedad por defecto

    // Polimorfismo: Realizar acciones diferentes haciendo uso del
    // mismo método
    // Constructor
    public Automovil(String marca, String modelo, String color){
        this.marca = marca;
        this.modelo = modelo;
        this.color = color;
    }
    public Automovil(String modelo, String color){
        this.marca = "Ferrari";
        this.modelo = modelo;
        this.color = color;
    }
    public Automovil(short cilindraje){
        // Los demás elementos deben recibir el valor null
        this.cilindraje = cilindraje;
    }

    // Getter y Setter

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public int getCilindraje() {
        return cilindraje;
    }

    public void setCilindraje(short cilindraje) {
        Automovil.cilindraje = cilindraje;
    }
}
