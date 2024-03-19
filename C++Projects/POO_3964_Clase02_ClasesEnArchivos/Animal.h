//
// Created by Diego Cruz on 19/03/2024.
//

#ifndef POO_3964_CLASE02_ANIMAL_H
#define POO_3964_CLASE02_ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    // Constructor
    Animal();

    virtual void expresarse();
    virtual string recorridoEnMetrosPorSegundo();
    virtual void alimentarse(string tipo);
};


#endif //POO_3964_CLASE02_ANIMAL_H
