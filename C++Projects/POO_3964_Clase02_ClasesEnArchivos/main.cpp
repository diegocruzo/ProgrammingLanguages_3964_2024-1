#include "Persona.h"

int main() {
    // Crear instancia de la clase Persona
    Persona ana("Ana", "cc", 43210987);
    // Hacer uso de la instancia con propiedades y métodos
    ana.setSexoBiologico('f');
    ana.setFechaNacimiento(29,02,1920);
    cout << "Usuario: " << ana.getNombre() << endl;
    cout << "Tipo de documento: " << ana.getTipoId() << endl;
    cout << "Número de documento: " << ana.getNumId() << endl;
    cout << "Fecha de nacimiento: " << ana.getFechaNacimiento() << endl;
    cout << "Sexo biológico: " << ana.getSexoBiologico() << endl;
    cout << ana.getNombre() << " saluda: " << ana.getExpresion() << endl;
    return 0;
}
