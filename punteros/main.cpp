#include <iostream>

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

    return 0;
}
