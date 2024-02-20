public class ObjetosDeAutomovil {
    public static void main(String[] args) {
        // Herencia: Creación de una clase o de un objeto
        // partiendo de otra clase
        Automovil carrito1 = new Automovil("Chevrolet", "Sail", "Negro");
        carrito1.setCilindraje((short) 1600);
        System.out.println("\nDatos de carrito1:");
        System.out.println("Marca: " + carrito1.getMarca());
        System.out.println("Modelo: " + carrito1.getModelo());
        System.out.println("Color: " + carrito1.getColor());
        System.out.println("Cilindraje: " + carrito1.getCilindraje());

        Automovil carrito2 = new Automovil("Testarossa", "Rojo");
        carrito2.setCilindraje((short) 5000);
        System.out.println("\nDatos de carrito2");
        System.out.println("Marca: " + carrito2.getMarca());
        System.out.println("Modelo: " + carrito2.getModelo());
        System.out.println("Color: " + carrito2.getColor());
        System.out.println("Cilindraje: " + carrito2.getCilindraje());

        Automovil carrito3 = new Automovil((short) 2000);
        System.out.println("\nDatos de carrito3");
        System.out.println("Marca: " + carrito3.getMarca());
        System.out.println("Modelo: " + carrito3.getModelo());
        System.out.println("Color: " + carrito3.getColor());
        System.out.println("Cilindraje: " + carrito3.getCilindraje());
    }
}
