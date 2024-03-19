//
// Created by Diego Cruz on 12/03/2024.
//

#include "Persona.h"

// Constructor
Persona::Persona(string nombre, string tipoId, int numId) : Mamifero(nombre) {
    this->tipoId = tipoId;
    this->numId = numId;
}

// Setter y Getter
void Persona::setFechaNacimiento(int day, int month, int year){
    this->fechaNacimiento = to_string(day)
                            + " de "
                            + setMes(month)
                            + " de "
                            + to_string(year);
}
string Persona::getFechaNacimiento(){
    return fechaNacimiento;
}

void Persona::setTipoId(string tipoId){
    this->tipoId = tipoId;
}
string Persona::getTipoId(){
    return tipoId;
}

void Persona::setNumId(int numId){
    this->numId = numId;
}
int Persona::getNumId(){
    return numId;
}

void Persona::setSexoBiologico(char sexo){
    if (toupper(sexo) == 'M'){
        this->sexoBiologico = "Masculino";
    }
    else if (sexo == 'f' || sexo == 'F'){
        this->sexoBiologico = "Femenino";
    }
    else
        this->sexoBiologico = "Sexo definido incorrectamente";
}
string Persona::getSexoBiologico(){
    return sexoBiologico;
}

string Persona::setMes(int numMes) {
    string mes;
    switch (numMes){
        case 1:
            mes = "enero";
            break;
        case 2:
            mes = "febrero";
            break;
        case 3:
            mes = "marzo";
            break;
        case 4:
            mes = "abril";
            break;
        case 5:
            mes = "mayo";
            break;
        case 6:
            mes = "junio";
            break;
        case 7:
            mes = "julio";
            break;
        case 8:
            mes = "agosto";
            break;
        case 9:
            mes = "septiembre";
            break;
        case 10:
            mes = "octubre";
            break;
        case 11:
            mes = "noviembre";
            break;
        case 12:
            mes = "diciembre";
            break;
        default:
            mes = "mes definido incorrectamente";
    }
    return mes;
}
