//
// Created by Diego Cruz on 19/03/2024.
//

#include "Perro.h"

Perro::Perro(string nombre) : Mamifero(nombre) {}

void Perro::expresarse() {
    cout << "Guau" << endl;
}
string Perro::recorridoEnMetrosPorSegundo() {
    return "Recorro 2 metros en un segundo";
}
