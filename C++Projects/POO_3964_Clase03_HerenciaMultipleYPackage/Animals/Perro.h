//
// Created by Diego Cruz on 19/03/2024.
//

#ifndef POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_PERRO_H
#define POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_PERRO_H

#include "../ParentClasses/Animal.h"
#include "../ParentClasses/Mamifero.h"

class Perro : public Animal, public Mamifero {
private:
    int edad;
public:
    // Constructor
    Perro(string nombre);

    string expresarse() override;
    string recorridoEnMetrosPorSegundo() override;

    int getEdad();
    void setEdad(int edad);
};

#endif //POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_PERRO_H
