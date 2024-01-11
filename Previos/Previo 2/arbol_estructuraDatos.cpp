#include <iostream>
using namespace std;

struct Node{//se define la estructura Node y representa un nodo en un arbol
    int data;           //se guarda el valor del nodo
    struct Node *left, *right;  //punteros a los nodos izquierdo y derecho
    Node(int data){      //es el constructor del nodo, para inicializar un nodo con un valor dado
        this->data = data;
        left = right = NULL;
    }
};

void preorderTraversal(struct Node* node) {//esta funcion es para hacer el recorrido en preorden de un arbol
    if (node == NULL)   //verifica si el nodo es nulo
        return;

    cout << node->data << "->";  //imprime el valor del nodo actual en la pantalla
    preorderTraversal(node->left);  //recorre los nodos izquierdos en preorden
    preorderTraversal(node->right); //recorre los nodos derechos en preorden
}

void postorderTraversal(struct Node* node) {//la funcion sirve para que se realice el recorrido en postorden de un arbol
    if (node == NULL)   //verifica si el nodo es nulo
        return;
    
    postorderTraversal(node->left);  //recorre los nodos izquierdos en postorden
    postorderTraversal(node->right); //recorre los nodos derechos en postorden
    cout << node->data << "->";      //imprime el valor del nodo actual
}

void inorderTraversal(struct Node* node){//En esta funcion se realiza el recorrido sin ningun orden de un arbol
    if (node == NULL)   //Verifica si el nodo es nulo
        return;
    inorderTraversal(node->left);   //Recorre los nodos izquierdos sin orden
    cout << node->data << "->";     //imprime el valor del nodo actual
    inorderTraversal(node->right);  //Recorre los nodos derechos sin orden
}

int main() {
    //se crea un arbol con nodos y sus valores
    struct Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    //imprime el recorrido sin orden del arbol
    cout << "Inorder traversal ";
    inorderTraversal(root);

    //imprime el recorrido en preorden del arbol
    cout << "\nPreorder traversal ";
    preorderTraversal(root);

    //imprime el recorrido en postorden del arboll
    cout<< "\nPostorder traversal";
    postorderTraversal(root);
}
