//
// Created by Diego Cruz on 19/03/2024.
//

#include "Animal.h"

Animal::Animal() {}

void Animal::expresarse() {
    cout << "Por definir" << endl;
}
string Animal::recorridoEnMetrosPorSegundo() {
    return "Por definir";
}
void Animal::alimentarse(string tipo) {
    if (tipo == "hogareño"){
        cout << "Vivo en un hogar, me alimento de concentrado" << endl;
    }
    else if (tipo == "callejero"){
        cout << "Me alimento de lo que encuentro en la calle" << endl;
    }
    else {
        cout << "No han definido de qué me alimento" << endl;
    }
}
