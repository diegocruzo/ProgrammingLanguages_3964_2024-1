#include <iostream>
using namespace std;

int variable = 5;

// Paso de parámetro "por valor" al interior de la función
void cambiarValor(int* y){
    y = &variable;
    cout << "Valor de \"x\" dentro de la función 1: " << *y << endl;
}

// Paso de parámetro "por referencia" al interior de la función
void cambiarValor2(int*& y){
    y = &variable;
    cout << "Valor de \"x\" dentro de la función 2: " << *y << endl;
}

int main() {
    int x = 12;
    int* px = &x;

    cout << "Asignación por valor: " << endl;
    cout << "Valor de \"x\" antes de pasar por función 1: " << *px << endl;
    cambiarValor(px);
    cout << "Valor de \"x\" después de pasar por función 1: " << *px << endl;

    cout << "\nAsignación por referencia: " << endl;
    cout << "Valor de \"x\" antes de pasar por función 2: " << *px << endl;
    cambiarValor2(px);
    cout << "Valor de \"x\" después de pasar por función 2: " << *px << endl;

    return 0;
}
