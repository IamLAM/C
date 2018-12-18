#include <iostream>

using namespace std;

struct Nodo
{

    int valor;
    Nodo *derecha;
    Nodo *izquierda;

};

int main()
{
    cout << "Trabajando con arboles binarios" << endl;
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
