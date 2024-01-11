#include <stdlib.h>
#include <iostream>
using namespace std;

#define MAX 10 //se define la variable con un valor 10
int size = 0;//se declara la variable global qu inicia en 0

struct stack { //se define la estructura stack
    int items[MAX]; //arreglo de tama;o maximo
    int top;
};

typedef struct stack st; //se renombre la estructura como st

void createEmptyStack(st *s){//se define la funcion que inicia con top igual a -1
    s->top = -1;
}

int isfull(st *s) {//se define la funcion que devuelve 1 si la fila esta llena y 0 si no 
    if (s->top == MAX -1)
        return 1;
    else
        return 0;
}

int isempty(st *s){//se define la funcion
    if (s->top == -1)
        return 1; //devuelve 1 si la fila esta vacia
    else 
        return 0; //y 0 si no lo esta
}

void push(st *s, int newitem) {//se define la funcion que inserta un nuevo elemento en la fila si no esta llena
    if (isfull(s)) {
        cout << "STACK FULL";
    } 

    else{
        s->top ++;
        s->items[s->top] = newitem;
    }
    size++; //y aumenta el tama;o
}

void pop (st *s) {//se define la funcion que elimina el elemento si no esta vacia
    if (isempty(s)) {
        cout << "\n STACK EMPU \n";
    }
    else{
        cout << "Item popped= " << s->items[s->top];
        s->top--;
    }
    size--;//disminuye el tama;o
    cout << endl;
}

void printStack(st *s){//se define la funcion que imprime los elementos
    printf("Stack: ");
    for (int i = 0; i < size; i++){
        cout << s->items[i]<< " ";
    }
    cout << endl;
}

int main() {
    int ch;
    st *s = (st *)malloc(sizeof(st));
    //se declara un puntero y se reserva memoria

    createEmptyStack(s); //se llama la funcion

    //se agregan elementos, imprime, y se eliminan elementos
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s); 

    pop(s);

    cout << "\nAfter popping out\n"; //imprime el mensaje
    printStack(s);//se imprime despues de quitar un elemento
}