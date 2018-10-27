#include <iostream>

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

    return 0;
}
