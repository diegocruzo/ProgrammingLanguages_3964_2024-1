//
// Created by Diego Cruz on 19/03/2024.
//

#include "Node.h"

class LinkedList {
private:
    Node* first; // Puntero hacia el primer elemento de la lista
    Node* last; // Puntero hacia el último elemento de la lista
    int size; // Cantidad de elementos en la lista
    bool IsEmpty(); // Verificar si la lista está vacía
public:
    LinkedList(); // Constructor
    void Insertlast(int); // Operación insertar al final de la lista
    void Show(); // Mostrar los elementos de la lista
    void DeleteNode(int); // Operación eliminar un Nodo
    // Setters y Getters
    Node *getFirst() const;
    void setFirst(Node *first);

    Node *getLast() const;
    void setLast(Node *last);

    int getSize() const;
    void setSize(int size);
};

