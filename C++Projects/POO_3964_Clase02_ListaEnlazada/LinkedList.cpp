//
// Created by Diego Cruz on 19/03/2024.
//

#include "LinkedList.h"

// Constructor
LinkedList::LinkedList(){
    this->first = nullptr; // Cabeza de la lista
    this->last = nullptr; // Cola de la lista
    this->size = 0; // Cantidad de elementos que tiene la lista
}

// Operación para verificar si una lista está vacía
bool LinkedList::IsEmpty(){
    return first == nullptr;
}

// Función para insertar un nuevo nodo al final de la lista
void LinkedList::Insertlast(int data) {
    // Asignar memoria al nuevo elemento
    // y rellenar el campo de datos
    Node* newNode = new Node(data);

    // Verificar si la lista está vacía
    if(IsEmpty()){
        // Operación insertar un elemento en una lista vacía
        setFirst(newNode);
        setLast(newNode);
    }
    else
    {
        // El último elemento de la lista apunta hacia
        // el nuevo elemento
        last->setNext(newNode);
        // El nuevo elemento pasa a ser el ùltimo elemento en la lista
        setLast(newNode);

    }
    // Actualizar el tamaño de la lista
    size++;
}

// Operación que muestra la lista
void LinkedList::Show(){
    // Verificar si la lista está vacía
    if (IsEmpty()) {
        cout << "La lista está vacía" << endl;
        return; // Esta sentencia me saca de la función
    }
    else {
        // Crear un elemento auxiliar y asignarle el primer
        // elemento de la lista
        Node* aux = getFirst();
        while(aux != nullptr){
            cout << aux->getData() << " ";
            aux = aux->getNext();
        }
        cout << endl;
    }
}

// Getter y Setter
Node *LinkedList::getFirst() const {
    return first;
}

void LinkedList::setFirst(Node *first) {
    LinkedList::first = first;
}

Node *LinkedList::getLast() const {
    return last;
}

void LinkedList::setLast(Node *last) {
    LinkedList::last = last;
}

int LinkedList::getSize() const {
    return size;
}

void LinkedList::setSize(int size) {
    LinkedList::size = size;
}
