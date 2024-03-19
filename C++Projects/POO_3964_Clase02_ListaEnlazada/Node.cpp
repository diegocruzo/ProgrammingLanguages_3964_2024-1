//
// Created by Diego Cruz on 12/03/2024.
//

#include "Node.h"

Node::Node(int data){
    this->data = data;
    this->next = NULL;
}

int Node::getData() const {
    return data;
}
void Node::setData(int data) {
    Node::data = data;
}

Node* Node::getNext() const {
    return next;
}
void Node::setNext(Node *next) {
    Node::next = next;
}



