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
    int op=1;

    while(op!=4)
    {
        cout<<"Que desea realizar?"<<endl;
        cout<<"(1)Insertar elemento a cola"<<endl;
        cout<<"(2)Mostrar cola"<<endl;
        cout<<"(3)Borrar elemento de cola"<<endl;
        cout<<"(4)Salir"<<endl;
        cin>>op;

        switch(op)
        {

        case 1:
            cout<<"Proporciona un valor"<<endl;
            cin>>v;
            insertarCola(frente,fin,v);
            break;



        default:
            cout<<"Selecciono un opción que no existe, intente de nuevo";
        }
    }

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
