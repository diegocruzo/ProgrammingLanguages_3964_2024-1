//
// Created by Diego Cruz on 19/03/2024.
//

#ifndef POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_GATO_H
#define POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_GATO_H

#include "../ParentClasses/Animal.h"
#include "../ParentClasses/Mamifero.h"

class Gato : public Animal, public Mamifero {
private:
    int edad;
public:
    // Constructor
    Gato(string nombre);

    string expresarse() override;
    string recorridoEnMetrosPorSegundo() override;

    int getEdad();
    void setEdad(int edad);
};

#endif //POO_3964_CLASE03_HERENCIAMULTIPLEYPACKAGE_GATO_H
