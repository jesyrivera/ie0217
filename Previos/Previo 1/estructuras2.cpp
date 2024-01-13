#include <iostream>
#include <cstring>
using namespace std;

struct Books { //se define la estructura Books
    char title[50]; //arreglo para almacenar el titulo del libro y que el maximo de caracteres es de 50
    char author[50];//arreglo para almacenar el autor del libro y que el maximo de caracteres es de 50
    char subject[100]; //arreglo para almacenar el tema del libro y que el maximo de caracteres es de 100
    int book_id;
};

int main() {
    //se declaran dos varaibles de la estructura Books
    struct Books Book1;
    struct Books Book2;

    //strcpy lo que hace es copiar el contenido de una cadena en otra
    //se le copian valores a Book1
    strcpy(Book1.title, "Learn C++ Programming"); 
    strcpy(Book1.author, "chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407; //se le asigna un valor a book_id

    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700; //se le asigna un valor a book_id

    //se imprime la informacion de Book1 y Book2
    cout << "Book 1 title: " << Book1.title << endl;
    cout << "Book 1 author: " << Book1.author << endl;
    cout << "Book 1 subject: " << Book1.subject << endl;
    cout << "Book 1 id: " << Book1.book_id << endl;

    cout << "Book 2 title: " << Book2.title << endl;
    cout << "Book 2 author: " << Book2.author << endl;
    cout << "Book 2 subject: " << Book2.subject << endl;
    cout << "Book 2 id: " << Book2.book_id << endl;
    
    return 0;
}