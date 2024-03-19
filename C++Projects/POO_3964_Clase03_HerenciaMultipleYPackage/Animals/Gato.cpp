//
// Created by Diego Cruz on 19/03/2024.
//

#include "Gato.h"

Gato::Gato(string nombre) : Mamifero(nombre) {}

string Gato::expresarse() {
    return "Miau";
}

string Gato::recorridoEnMetrosPorSegundo() {
    return "¡Avanzo 4 metros en un segundo!";
}

// Getter y Setter

int Gato::getEdad() {
    return edad;
}
void Gato::setEdad(int edad) {
    this->edad = edad * 7;
}
