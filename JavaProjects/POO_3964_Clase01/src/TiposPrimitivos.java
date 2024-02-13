import java.sql.SQLOutput;

public class TiposPrimitivos {
    public static void main(String[] args) {
        // Tipo primitivo booleano
        boolean vlr = (3-2) >= 1 || 5 < 3;
        System.out.println("Tipo: boolean");
        System.out.println(vlr);
        System.out.println(Boolean.compare(vlr, true));

        // Tipo primitivo char (carácter)
        char letra = '\u0642';
        System.out.println("\nTipo: char");
        System.out.println(letra);
        System.out.println("Tamaño en bits: " + Character.SIZE);
        System.out.println("Tamaño en bytes: " + Character.BYTES);
        System.out.println("Valor mínimo: " + Character.MIN_VALUE);
        System.out.println("Valor máximo: " + Character.MAX_VALUE);

        // Tipo String (Cadena de caracteres)
        //String cadena = "Diego";
        String cadena = new String();
        cadena = "Diego Iván \u0C20";
        System.out.println("\nTipo: String (no primitivo)");
        System.out.println(cadena);

        // Tipos primitivos numèricos
        // Tipos primitivos enteros
        // Tipo primitivo byte
        byte num1 = 127;
        System.out.println("\nTipo: byte");
        System.out.println(num1);
        System.out.println("Tamaño en bits: " + Byte.SIZE);
        System.out.println("Tamaño en bytes: " + Byte.BYTES);
        System.out.println("Valor mínimo: " + Byte.MIN_VALUE);
        System.out.println("Valor máximo: " + Byte.MAX_VALUE);

        // Tipo primitivo short
        short num2 = 32767;
        System.out.println("\nTipo: short");
        System.out.println(num2);
        System.out.println("Tamaño en bits: " + Short.SIZE);
        System.out.println("Tamaño en bytes: " + Short.BYTES);
        System.out.println("Valor mínimo: " + Short.MIN_VALUE);
        System.out.println("Valor máximo: " + Short.MAX_VALUE);

        // Tipo primitivo int (integer)
        int num3 = 2147483647;
        System.out.println("\nTipo: int");
        System.out.println(num3);
        System.out.println("Tamaño en bits: " + Integer.SIZE);
        System.out.println("Tamaño en bytes: " + Integer.BYTES);
        System.out.println("Valor mínimo: " + Integer.MIN_VALUE);
        System.out.println("Valor máximo: " + Integer.MAX_VALUE);

        // Tipo primitivo int (long)
        long num4 = -9223372036854775808L;
        System.out.println("\nTipo: long");
        System.out.println(num4);
        System.out.println("Tamaño en bits: " + Long.SIZE);
        System.out.println("Tamaño en bytes: " + Long.BYTES);
        System.out.println("Valor mínimo: " + Long.MIN_VALUE);
        System.out.println("Valor máximo: " + Long.MAX_VALUE);

        // Tipo primitivo float (floating point)
        Float num5 = -3.4028235E38f;
        System.out.println("\nTipo: float");
        System.out.println(num5);
        System.out.println("Tamaño en bits: " + Float.SIZE);
        System.out.println("Tamaño en bytes: " + Float.BYTES);
        System.out.println("Valor mínimo: " + Float.MIN_VALUE);
        System.out.println("Valor máximo: " + Float.MAX_VALUE);

        // Tipo primitivo double
        double num6 = 1.7976931348623157E308;
        System.out.println("\nTipo: double");
        System.out.println(num6);
        System.out.println("Tamaño en bits: " + Double.SIZE);
        System.out.println("Tamaño en bytes: " + Double.BYTES);
        System.out.println("Valor mínimo: " + Double.MIN_VALUE);
        System.out.println("Valor máximo: " + Double.MAX_VALUE);

        // Tipo primitivo genérico
        var variable = 3.2f;
        System.out.println("\nTipo: var");
        System.out.println(variable);
    }
}
