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

int main()
{
    int op,valor;
    cout << "Trabajando con arboles binarios" << endl;
    while(op!=3){
    cout << "Que deseas realizar?" << endl;
    cout << "1.-Insertar nodo" << endl;
    cout << "2.-Busqueda" << endl;
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
