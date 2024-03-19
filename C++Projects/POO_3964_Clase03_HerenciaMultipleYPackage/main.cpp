#include "Animals/Gato.h"
#include "Animals/Perro.h"

int main() {

    Gato max("Max");
    max.setEdad(5);
    cout << "Nombre: " << max.getNombre() << endl;
    cout << "Saludo: " << max.expresarse() << endl;
    cout << "Edad: " << max.getEdad() << " años" << endl;
    cout << "Tipo de alimento: " << max.alimentarse("hogareño") << endl;
    cout << max.recorridoEnMetrosPorSegundo() << endl;

    Gato michi("Michi");
    cout << "\nNombre: " << michi.getNombre() << endl;
    cout << "Saludo: " << michi.expresarse() << endl;
    cout << "Edad: " << michi.getEdad() << " años" << endl;
    cout << "Tipo de alimento: " << michi.alimentarse("callejero") << endl;
    cout << michi.recorridoEnMetrosPorSegundo() << endl;

    Perro firulais("Firulais");
    firulais.setEdad(5);
    cout << "\nNombre: " << firulais.getNombre() << endl;
    cout << "Saludo: " << firulais.expresarse() << endl;
    cout << "Edad: " << firulais.getEdad() << " años" << endl;
    cout << "Tipo de alimento: " << firulais.alimentarse("no sé") << endl;
    cout << firulais.recorridoEnMetrosPorSegundo() << endl;

    return 0;
}
