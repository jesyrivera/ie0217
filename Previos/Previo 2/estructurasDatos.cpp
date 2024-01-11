#include <iostream>
#define SIZE 5 //se define la constante size de valor 5

using namespace std;

class Queue { //se define la clase Queue
private: //los miembros son accesibles solo desde adentro de la clase 
    int items[SIZE], front, rear; //declara un arreglo items y dos variables

public://los miembros son accesibles desde afuera de la clase
    Queue() { //constructor de la clase que inicia con los valores de las variables
        front = -1;
        rear = -1;
    }

    bool isfull() { //verifica si la fila esta llena
        if (front == 0 && rear == SIZE - 1) {
            return true; //si esta llena devuelve true
        }
        return false; //si no esta llena devuelve false
    }

    bool isEmpty() { //verifica si la fila esta vacia
        if (front == -1)
            return true;//si esta vacia devuelve true
        else
            return false;//si no esta vacia devuelve false
    }

    void enQueue(int element) { //inserta un elemento en la fila, pero antes verifica si esta llena
        if (isfull()) {
            cout << "Queue is full";
        } else {
            if (front == -1) front = 0;
            rear++;
            items[rear] = element;
            cout << endl << "Inserted " << element << endl;
        }
    }

    int deQueue() { //elimina elementos de la fila, antes verifica si esta vacia
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return (-1);
        } else {
            element = items[front];
            if (front >= rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            cout << endl << "Deleted -> " << element << endl;
            return (element);
        }
    }

    void display() { //muestra los elementos de la fila
        int i;
        if (isEmpty()) {
            cout << endl << "Empty Queue" << endl;
        } else {
            cout << endl << "Front index-> ";
            cout << endl << "Items -> ";
            for (i = front; i <= rear; i++)
                cout << items[i] << " ";
            cout << endl << "Rear index-> " << rear << endl;
        }
    }
};

int main() {
    Queue q; //crea un objeto de la clase

    q.deQueue(); //llama al metodo en la fila vacia

    //inserta valores en la fila
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.enQueue(6); //inserta otro elemento

    q.display(); //muestra los elementos de la fila

    q.deQueue(); //elimina un elemento de la fila

    q.display(); //muestra los elementos de la fila luego de eliminar un elemento

    return 0;
}