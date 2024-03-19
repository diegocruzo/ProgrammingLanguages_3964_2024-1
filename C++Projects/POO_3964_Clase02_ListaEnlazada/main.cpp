#include "LInkedList.h"

int main() {
    // Crear la instancia de la lista
    LinkedList lista;
    cout << "\nElementos de la lista:" << endl;
    lista.Show();

    // Adicionar nodos
    lista.Insertlast(3);
    lista.Insertlast(19);
    lista.Insertlast(2024);
    lista.Insertlast(365);

    cout << "\nElementos de la lista:" << endl;
    lista.Show();

    cout << "\nCantidad de elementos en la lista: " << lista.getSize() << endl;
    return 0;
}
