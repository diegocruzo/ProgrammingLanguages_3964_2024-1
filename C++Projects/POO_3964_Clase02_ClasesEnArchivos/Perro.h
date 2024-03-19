//
// Created by Diego Cruz on 19/03/2024.
//

#ifndef POO_3964_CLASE02_PERRO_H
#define POO_3964_CLASE02_PERRO_H

#include "Mamifero.h"
#include "Animal.h"


class Perro : public Animal, public Mamifero {
private:
    int edad;
public:
    // Constructor
    Perro(string nombre);

    void expresarse() override;
    string recorridoEnMetrosPorSegundo() override;
};


#endif //POO_3964_CLASE02_PERRO_H
