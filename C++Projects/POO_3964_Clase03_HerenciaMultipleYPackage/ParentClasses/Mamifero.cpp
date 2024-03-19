//
// Created by Diego Cruz on 19/03/2024.
//

#include "Mamifero.h"

// Constructor
Mamifero::Mamifero(string nombre) {
    this->nombre = nombre;
}

// Getter y Setter
string Mamifero::getNombre() {
    return nombre;
}
void Mamifero::setNombre(string nombre) {
    Mamifero::nombre = nombre;
}