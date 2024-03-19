//
// Created by Diego Cruz on 12/03/2024.
//

#include "Mamifero.h"

// Constructor de la clase
Mamifero::Mamifero(string nombre){
    this->nombre = nombre;
}

// Setter y Getter
string Mamifero::getNombre(){
    return nombre;
}
void Mamifero::setNombre(string nombre){
    this->nombre = nombre;
}
