//
// Created by Diego Cruz on 19/03/2024.
//

#ifndef POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_ANIMAL_H
#define POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    // Constructor
    Animal();

    // Métodos para polimorfismo
    virtual string expresarse();
    virtual string recorridoEnMetrosPorSegundo();
    string alimentarse(string tipo);
};

#endif //POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_ANIMAL_H
