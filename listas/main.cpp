#include <iostream>

using namespace std;

struct Nodo
{
    int valor;
    Nodo *siguiente;

};

void insertarLista(Nodo *&,int);

int main()
{
    Nodo *lista=NULL;
    int op=1,c,i=0,v;

    cout << "Trabajando con listas(simples, doblemente enlazadas, simples circulares, circulares doblemente enlzadas)" << endl;
    while(op!=4)
    {
        cout<<"(1)Insertar valores"<<endl;
        cout<<"(4)salir"<<endl;
        cin>>op;

        switch(op)
        {

        case 1:
            cout<<"Indica el numero de valores a introducir"<<endl;
            cin>>c;
            while(i<c)
            {
                cout<<"Valor["<<i<<"]:"<<;
                cin>>v;

            }

            break;

        default:
            cout<<"La opción seleccionada no corresponde"<<endl;
        }


    }




    return 0;
}

void insertarLista(Nodo *&lista,int v)
{
    Nodo *insLista=new Nodo();
    insLista->valor=v;//asignamos el valor al nodo de la lista

    Nodo *aux=lista;
    Nodo *aux2;

    //se meten ordenados los datos
    while((aux!=NULL)&&(aux->valor<v))
    {
        aux2=aux1;
        aux=aux->siguiente;
    }


    if(insLista==aux)
    {
        lista=insLista;
    }
    else
    {
        aux2->siguiente=insLista;
    }

    insLista->siguiente=aux;


}
