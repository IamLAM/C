#include <iostream>

using namespace std;

void cambiar(int *,int *);
void cambiarArreglo (int *,int *);


int main()
{
    int a=5,b=10;
    int op;
    int d[]= {50,60,80,90,100};
    int c[]= {5,6,8,9,10};
    int i=0;

    cout<<"Que deseas intercambiar (1)valores enteros (2)arreglos";
    cin>>op;
//valores iniciales
    switch(op)
    {

    case 1:
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cambiar(&a,&b);
//valores intercambiados por medio de punteros
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        break;
    case 2:

        while(i<5)
        {
            cout<<"c="<<c[i]<<"d="<<d[i]<<endl;
            i++;

        }
        cambiarArreglo(c,d);
        i=0;
        while(i<5)
        {
            cout<<"c="<<c[i]<<"d="<<d[i]<<endl;
            i++;

        }
        break;

    default:
        cout<<"No existe la opción seleccionada";

        break;

    }

    return 0;
}

void cambiarArreglo(int *c,int *d)
{
    int i=0;
    int f;
    while(i<5)
    {
        f=c[i];
        c[i]=d[i];
        d[i]=f;
        i++;
    }
}

void cambiar(int *a,int *b)
{

    int t;
    t=*a;
    *a=*b;
    *b=t;


}
