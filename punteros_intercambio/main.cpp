#include <iostream>

using namespace std;

void cambiar(int *,int *);


int main()
{   int a=5,b=10;
    int op;

cout<<"Que deseas intercambiar (1)valores enteros (2)arreglos"
cin>>op;
//valores iniciales
switch(op){

case 1:
        cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cambiar(&a,&b);
//valores intercambiados por medio de punteros
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
break;
case 2:
break;

default:
    cout<<"No existe la opción seleccionada";



}

    return 0;
}

void cambiar(int *a,int *b){

int t;
t=*a;
*a=*b;
*b=t;


}
