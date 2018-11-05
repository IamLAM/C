#include <iostream>
#include<stdlib.h>
using namespace std;

struct Nodo
{
    int valor;
    Nodo *siguiente;

};

void insertarPila(Nodo *&,int);


int main()
{
    //El primero en entrar es el ultimo en salir
    //El ultimo que entra es el primero que sale
    int cantidad,i=0,v;

    Nodo *pila=NULL;
    cout << "Trabajando con pilas" << endl;
    cout<<"Proporciona la cantidad de numeros a introducir en la pila"<<endl;
    cin>>cantidad;

    while(i<cantidad){
        cout<<"Dame el valor["<<i<<"]:";
        cin>>v;
        insertarPila(pila,v);
        i++;
    }


    return 0;
}

void insertarPila(Nodo *&pila,int v)
{
    Nodo *insPila=new Nodo();
    insPila->valor=v;
    insPila->siguiente=pila;
    pila=insPila;


}
