#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "Trabajando con punteros y referencias" << endl;

    //accederemos a la direcci�n de memoria de una variable
    int a=10;
    int *p=&a;
    cout <<"Contenido de la variable"<<a<<endl;
    cout <<"Direcci�n de memoria de la variable"<<&a<<endl;
    cout <<"Contenido de memoria del puntero"<<p<<endl;
    cout <<"Direcci�n de memoria del puntero"<<&p<<endl;

    cout <<"Modificaremos el valor de a desde puntero"<<endl;
    cout <<"El valor de a desde p: "<<*p<<endl;

    *p=1000;
    cout <<"El valor de a es: "<<a<<endl;
    cout <<"==================="<<endl;
    cout <<"Haremos una referencia a la misma memoria"<<endl;
    int &r=a;
    cout <<"Contenido de la variable"<<a<<endl;
    cout <<"Direcci�n de memoria de la variable"<<&a<<endl;

    cout <<"Contenido de la referencia"<<r<<endl;
    cout <<"Direcci�n de memoria de la referencia"<<&r<<endl;

    /*
        cout<<"Trabajando con punteros: par o impar"<<endl;

        int numero,*pn;

        cout<<"Cual es tu numero:"; cin>>numero;
        pn=&numero;

        if(*pn%2==0)
            {cout<<"Es numero "<<*pn<<"es par"<<endl;
             cout<<"Posici�n de memoria"<<pn<<endl;
            }
        else
            {cout<<"Es numero "<<*pn<<"es impar"<<endl;
             cout<<"Posici�n de memoria"<<pn<<endl;

            }
    */
/*
    int numero,*pn,c=0;
    char salir='n';
    while(salir!='y')
    {

        cout<<"Trabajando con numeros primos"<<endl;
        cout<<"Proporciona un numero:"<<endl;
        cin>>numero;
        pn=&numero;

        for(int i=1; i<*pn; i++)
        {

            if(*pn%i==0)
                c++;
        }

        if(c==2)
            cout<<"es un numero primo"<<endl;
        else
            cout<<"no es un numero primo";

        cout<<"deseas salir?(y/n):";
        cin>>salir;
    }
    getch();*/

    cout<<"Arreglos y punteros"<<endl;
    int n[]={10,20,30,40,50};
    int *np;
    np=n; // se copia la direccion de memoria del espacio 1 del arreglo

    for(int i=0;i<5;i++)
    {


        cout<<"Elemento:"<<i<<":"<<*np<<endl;

    }

  getch();


    return 0;
}
