#include <iostream>

using namespace std;

int main()
{
    cout << "Precedencia aritmetica" << endl;
    /*
    1-Primero los parentesis
    2.-Divisi�n, multiplicaci�n y %
    3.-Sumas y restas
    */

    cout<<(5+5)/10+2*4-1<<endl;
    /*
    Primero hace la suma de los parentesis
    Segundo hace la divisi�n
    Tercero hace la multiplicaci�n
    Cuarto hace la suma
    Quinto hace la resta
    */

    return 0;
}
