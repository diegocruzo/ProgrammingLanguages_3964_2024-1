//
// Created by Diego Cruz on 12/03/2024.
//

#include "Mamifero.h"

class Persona : public Mamifero{ // Herencia
private:
    string fechaNacimiento, tipoId, sexoBiologico;
    int numId;
    string setMes(int numMes); // Declaración de un método sin definirlo

public:
    Persona(string nombre, string tipoId, int numId); // Constructor
    // Setter y Getter
    void setFechaNacimiento(int day, int month, int year);
    string getFechaNacimiento();

    void setTipoId(string tipoId);
    string getTipoId();

    void setNumId(int numId);
    int getNumId();

    void setSexoBiologico(char sexo);
    string getSexoBiologico();

    string getExpresion() const {
        return "¡Hola!";
    }
};
