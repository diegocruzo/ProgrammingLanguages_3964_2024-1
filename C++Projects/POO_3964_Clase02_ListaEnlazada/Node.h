//
// Created by Diego Cruz on 12/03/2024.
//
#include <iostream>
using namespace std;

class Node {
private:
    int data; // Valor del dato en la lista
    Node* next;
public:
    Node(int data = 0); // Constructor de la clase
    // setter y getter
    int getData() const;
    void setData(int data);
    Node* getNext() const;
    void setNext(Node* next);
};

