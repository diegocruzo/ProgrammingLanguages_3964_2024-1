#include <iostream>
using namespace std;

// Abstracción: Clase superior
class Mamifero {
private: // Encapsulamiento
    string nombre, expresion;
public:
    // Constructor de la clase
    Mamifero(string nombre){
        this->nombre = nombre;
    }
    // Constructor con sobrecarga de métodos (polimorfismo)
    Mamifero(){
        this->nombre = "Por definir";
    }

    // Setter y Getter
    string getNombre(){
        return nombre;
    }
    void setNombre(string nombre){
        this->nombre = nombre;
    }

    const string &getExpresion() const {
        return expresion;
    }

    void setExpresion(const string &expresion) {
        Mamifero::expresion = expresion;
    }
};

// Subclase Persona
class Persona: public Mamifero{ // Herencia: Persona hereda de Mamífero
private:
    string fechaNacimiento, tipoId, sexoBiologico;
    int numId;
    string setMes(int numMes); // Declaración de un método sin definirlo

public:
    // Constructor
    Persona(string tipoId, int numId){
        this->tipoId = tipoId;
        this->numId = numId;
    }

    // Setter y Getter
    void setFechaNacimiento(int day, int month, int year){
        this->fechaNacimiento = to_string(day)
                                + " de "
                                + setMes(month)
                                + " de "
                                + to_string(year);
    }
    string getFechaNacimiento(){
        return fechaNacimiento;
    }

    void setTipoId(string tipoId){
        this->tipoId = tipoId;
    }
    string getTipoId(){
        return tipoId;
    }

    void setNumId(int numId){
        this->numId = numId;
    }
    int getNumId(){
        return numId;
    }

    void setSexoBiologico(char sexo){
        if (toupper(sexo) == 'M'){
            this->sexoBiologico = "Masculino";
        }
        else if (sexo == 'f' || sexo == 'F'){
            this->sexoBiologico = "Femenino";
        }
        else
            this->sexoBiologico = "Sexo definido incorrectamente";
    }
    string getSexoBiologico(){
        return sexoBiologico;
    }
};

// Definición de un método fuera de la clase Persona
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

// Función principal
int main() {
    string nombre = "Diego";
    cout << "Hola, " << nombre << "!" << endl;

    // Crear instancia de la clase Persona
    Persona ana("cc", 43210987);
    // Hacer uso de la instancia con propiedades y métodos
    ana.setNombre("Ana");
    ana.setSexoBiologico('f');
    ana.setFechaNacimiento(29,02,1920);
    cout << "Usuario: " << ana.getNombre() << endl;
    cout << "Tipo de documento: " << ana.getTipoId() << endl;
    cout << "Número de documento: " << ana.getNumId() << endl;
    cout << "Fecha de nacimiento: " << ana.getFechaNacimiento() << endl;
    cout << "Sexo biológico: " << ana.getSexoBiologico();

    return 0;
}
