#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{ //se define la clase Node
    public: //los miembros son accesibles desde afuera de la clase
        int value;
        Node* next; //miembro de tipo puntero a Node
};

int main() {
    Node* head; //se declara un puntero a Node
    Node* one = NULL; //declara un puntero a Node con el valor NULL
    Node* two = NULL; //declara un puntero a Node con el valor NULL
    Node* three = NULL; //declara un puntero a Node con el valor NULL 

    one = new Node(); //crea un nuevo objeto y le asigna su direccion de memoria al puntero
    two = new Node(); //crea un nuevo objeto y le asigna su direccion de memoria al puntero
    three = new Node(); //crea un nuevo objeto y le asigna su direccion de memoria al puntero

    //crea una lista enlazada de tres nodos, la recorre e imprime
    one->next = two; //se le asigna la direccion de memoria del objeto two al miembro next del objeto one
    two->next = three; //se le asigna la direccion de memoria del objeto three al miembro next del objeto two
    three->next = NULL; //se le asigna NULL al miembro next del objeto three

    head = one; //se le asigna la direccion de memoria del objeto one al puntero head
    while (head != NULL) { //ciclo que insiste mientras head no sea NULL
        cout << head->value; //imprime el valor de value del objeto apuntado por head 
        head = head->next; //le asigna la direccion de memoria guardada en next del objeto apuntado por head a head
    }
}