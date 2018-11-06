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
    int cantidad,i=0,v,op=1;
    Nodo *pila=NULL;
   while(op!=4){
    cout<<"Selecciona la opción que deseas realizar:"<<endl;
    cout<<"(1)Insertar valor a pila"<<endl;
    cout<<"(2)Mostrar valor a pila"<<endl;
    cout<<"(3)Eliminar valor a pila"<<endl;
    cout<<"(4)Salir"<<endl;
    cin>>op;
    switch(op)
    {
    case 1:
        cout<<"Proporciona la cantidad de numeros a introducir en la pila"<<endl;
        cin>>cantidad;

        while(i<cantidad)
        {
            cout<<"Dame el valor["<<i<<"]:";
            cin>>v;
            insertarPila(pila,v);
            i++;
        }
        break;
    case 2:
        mostrarPila(pila);
        break;

    case 3:

        if(pila==NULL)
        {
            cout<<"Una disculpa, los datos no pueden ser eliminados:pila vacia"<<endl;

        }
        else
        {   cout<<"se eliminara dato";
/*
            while(pila!=NULL)
            {
                eliminarPila(pila,v);
                if(pila!=NULL)
                {
                    cout<<v<<"|"<<endl;
                }
                else
                {
                    cout<<"*"<<endl;
                }
            }*/
        }



        break;
    default:
        cout<<"La opción seleccionada no existe, por favor intente de nuevo"<<endl;


    }

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

void mostrarPila(Nodo *&pila)
{
    Nodo *aux;

    if(pila==NULL)
    {
        cout<<"Una disculpa, los datos no pueden ser mostrados:pila vacia"<<endl;

    }
    else
    {
        aux=pila;
        while(aux!=NULL)
        {
            cout<<"Valor"<<aux->valor<<endl;
            aux=aux->siguiente;
        }
    }

}

void eliminarPila(Nodo *pila,int &v)
{
    Nodo *aux=pila;
    v=aux->valor;
    pila=aux->siguiente;
    delete aux;


}
