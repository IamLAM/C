#include <iostream>

using namespace std;

void cambiar(int *,int *);


int main()
{   int a=5,b=10;
//valores iniciales
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cambiar(&a,&b);
//valores intercambiados por medio de punteros
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}

void cambiar(int *a,int *b){

int t;
t=*a;
*a=*b;
*b=t;


}
