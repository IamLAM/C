#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "Trabajando con punteros y referencias" << endl;

    //accederemos a la dirección de memoria de una variable
    int a=10;
    int *p=&a;
    cout <<"Contenido de la variable"<<a<<endl;
    cout <<"Dirección de memoria de la variable"<<&a<<endl;
    cout <<"Contenido de memoria del puntero"<<p<<endl;
    cout <<"Dirección de memoria del puntero"<<&p<<endl;

    cout <<"Modificaremos el valor de a desde puntero"<<endl;
    cout <<"El valor de a desde p: "<<*p<<endl;

    *p=1000;
    cout <<"El valor de a es: "<<a<<endl;
    cout <<"==================="<<endl;
    cout <<"Haremos una referencia a la misma memoria"<<endl;
    int &r=a;
    cout <<"Contenido de la variable"<<a<<endl;
    cout <<"Dirección de memoria de la variable"<<&a<<endl;

    cout <<"Contenido de la referencia"<<r<<endl;
    cout <<"Dirección de memoria de la referencia"<<&r<<endl;


    cout<<"Trabajando con punteros: par o impar"<<endl;

    int numero,*pn;

    cout<<"Cual es tu numero:"; cin>>numero;
    pn=&numero;

    if(*pn%2==0)
        {cout<<"Es numero "<<*pn<<"es par"<<endl;
         cout<<"Posición de memoria"<<pn<<endl;
        }
    else
        {cout<<"Es numero "<<*pn<<"es impar"<<endl;
         cout<<"Posición de memoria"<<pn<<endl;

        }


    getch();

    return 0;
}
