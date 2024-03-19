//
// Created by Diego Cruz on 19/03/2024.
//

#include "Perro.h"

Perro::Perro(string nombre) : Mamifero(nombre) {}

string Perro::expresarse() {
    return "Guau";
}

string Perro::recorridoEnMetrosPorSegundo() {
    return "¡Avanzo 2 metros en un segundo!";
}

// Getter y Setter
int Perro::getEdad() {
    return Perro::edad;
}
void Perro::setEdad(int edad) {
    this->edad = edad * 7;
}
