#include <iostream>
#include<stdlib.h>
using namespace std;

struct Nodo
{
    int valor;
    Nodo *siguiente;

};


void insertarPila(Nodo *&,int);
void mostrarPila(Nodo *&);
void eliminarPila(Nodo *&,int &);

int main()
{
    //El primero en entrar es el ultimo en salir
    //El ultimo que entra es el primero que sale
    int cantidad,i=0,v;

    Nodo *pila=NULL;
    cout << "Trabajando con pilas" << endl;
    cout<<"Proporciona la cantidad de numeros a introducir en la pila"<<endl;
    cin>>cantidad;

    while(i<cantidad)
    {
        cout<<"Dame el valor["<<i<<"]:";
        cin>>v;
        insertarPila(pila,v);
        i++;
    }

    mostrarPila(pila);


    return 0;
}

void insertarPila(Nodo *&pila,int v)
{
    Nodo *insPila=new Nodo();
    insPila->valor=v;
    insPila->siguiente=pila;
    pila=insPila;


}

void mostrarPila(Nodo *&pila)
{       Nodo *aux;

    if(pila==NULL)
    {
        cout<<"Una disculpa, los datos no pueden ser mostrados:pila vacia"<<endl;

    }
    else
    {   aux=pila;
        while(aux!=NULL)
        {
            cout<<"Valor"<<aux->valor<<endl;
            aux=aux->siguiente;
        }
    }

}

void eliminarPila(Nodo *pila,int &v){
Nodo *aux=pila;
v=aux->valor;
pila=aux->siguiente;
delete aux;


}
