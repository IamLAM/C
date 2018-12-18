#include <iostream>

using namespace std;

struct Nodo{

int valor;
Nodo *derecha;
Nodo *izquierda;

};

int main()
{
    cout << "Trabajando con arboles binarios" << endl;
    return 0;
}

Nodo *crearNodo(int v){
    Nodo *nnodo=new Nodo();
    Nodo->valor=v;
    Nodo->derecha=NULL;
    Nodo->izquierda=NULL;

    return nnodo;

}
