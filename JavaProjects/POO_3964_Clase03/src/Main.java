public class Main {
    public static void main(String[] args) {
        // Crear una instancia de Persona
        Persona juan = new Persona("Juan", "CC", 123456789);
        juan.setFechaNacimiento(18,11,2004);
        juan.setSexoBiologico('m');
        // Realizar acciones con la instancia de Persona
        System.out.println("Usuario: " + juan.getNombre());
        System.out.print("Saludo: ");
        juan.Expresarse();
        System.out.println("Fecha de nacimiento: " + juan.getFechaNacimiento());
        System.out.println("Sexo biológico: " + juan.getSexoBiologico());
        System.out.println("Tipo de documento: " + juan.getTipoId());
        System.out.println("Número de documento: " + juan.getNumId());

        Persona ana = new Persona('f');
        System.out.println("\nUsuario: " + ana.getNombre());
        System.out.println("Sexo biológico: " + ana.getSexoBiologico());
    }
}
