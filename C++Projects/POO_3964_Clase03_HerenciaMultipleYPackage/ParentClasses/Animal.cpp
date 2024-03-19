//
// Created by Diego Cruz on 19/03/2024.
//

#include "Animal.h"

Animal::Animal() {}

string Animal::expresarse() {
    return "Por definir";
}

string Animal::recorridoEnMetrosPorSegundo() {
    return "Por definir";
}

string Animal::alimentarse(string tipo) {
    if (tipo == "hogareño"){
        return "Vivo en un hogar, me alimento de concentrado";
    }
    else if (tipo == "callejero"){
        return "Me alimento de lo que encuentro en la calle";
    }
    else {
        return "No han definido de qué me alimento";
    }
}
