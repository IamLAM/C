#include <iostream>

using namespace std;

struct Nodo
{

    int valor;
    Nodo *derecha;
    Nodo *izquierda;

};

Nodo *arbol=NULL;

void insertar(Nodo *&,int);
Nodo *crearNodo(int );
void mostrar(Nodo *,int );


int main()
{
    int op,valor,c=0;
    cout << "Trabajando con arboles binarios" << endl;
    while(op!=3)
    {
        cout << "Que deseas realizar?" << endl;
        cout << "1.-Insertar nodo" << endl;
        cout << "2.-Mostrar" << endl;
        cout << "3.-Salir" << endl;
        cin>>op;
        switch(op)
        {

        case 1:
            cout<<"Cual es el numero a introducir:"<<endl;
            cin>>valor;
            insertar(arbol,valor);
            break;
        case 2:
            mostrar(arbol,c);
            break;


        }
    }

    return 0;
}

Nodo *crearNodo(int v)
{
    Nodo *nnodo=new Nodo();
    nnodo->valor=v;
    nnodo->derecha=NULL;
    nnodo->izquierda=NULL;

    return nnodo;

}

void insertar(Nodo *&arbol,int v)
{
    int vRaiz;
    if(arbol==NULL) //validamos que el arbol este vacio
    {
        Nodo *nnodo=crearNodo(v);
        arbol=nnodo;
    }
    else
    {
        vRaiz=arbol->valor;
        if(v<vRaiz)
        {

            insertar(arbol->izquierda,v);
        }
        else
        {
            insertar(arbol->derecha,v);

        }


    }




}


void mostrar(Nodo *arbol,int c)
{

    if(arbol==NULL)
    {
        return;
    }
    else
    {
        mostrar(arbol->derecha,c+1);
        for(int i=0; i<c; i++)
        {

            cout<<"  ";


        }
        cout<<arbol->valor<<endl;
        mostrar(arbol->izquierda,c+1);

    }

}
