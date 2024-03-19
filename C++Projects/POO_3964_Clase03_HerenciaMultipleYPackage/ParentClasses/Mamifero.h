//
// Created by Diego Cruz on 19/03/2024.
//

// Las siguientes dos líneas (condición y definición) se escriben como "Header Guards", para
// blindar el proyecto de posible generación múltiple de la misma clase durante la ejecución
// del programa, para evitar el efecto diamante entre las clases.
#ifndef POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_MAMIFERO_H
#define POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_MAMIFERO_H

#include <iostream>
using namespace std;

class Mamifero {
private:
    string nombre;
public:
    Mamifero(string nombre); // Constructor
    // Getter y Setter
    string getNombre();
    void setNombre(string nombre);
};

#endif //POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_MAMIFERO_H
