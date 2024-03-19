//
// Created by Diego Cruz on 12/03/2024.
//

#ifndef POO_3964_CLASE02_MAMIFERO_H
#define POO_3964_CLASE02_MAMIFERO_H

#include <iostream>
using namespace std;

class Mamifero {
private: // Encapsulamiento
    string nombre;
public:
    Mamifero(string nombre); // Constructor
    // Setter y Getter
    string getNombre();
    void setNombre(string nombre);
};

#endif //POO_3964_CLASE02_MAMIFERO_H

