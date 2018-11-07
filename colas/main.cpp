#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo
{

    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&frente,Nodo *&final,int v);
bool colaVacia(Nodo *);

int main()
{
    cout << "Trabajando en colas" << endl;
    Nodo *frente=NULL;
    Nodo *fin=NULL;
    int v;
    cout<<"Proporciona un valor"<<endl;
    cin>>v;



    return 0;
}

void insertarCola(Nodo *&frente,Nodo *&fin,int v)
{
    Nodo *insCola=new Nodo();
    insCola->dato=v;
    insCola->siguiente=NULL;
    if(colaVacia(frente)==NULL)
    {
        frente=insCola;
    }
    else
    {

        fin->siguiente=insCola;

    }
    fin=insCola;

}

bool colaVacia(Nodo *frente)
{
    if(frente==NULL)
        return true;
    else
        return false;
}
