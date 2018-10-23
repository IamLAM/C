#include <iostream>

using namespace std;

int main()
{
    cout << "Precedencia aritmetica" << endl;
    /*
    1-Primero los parentesis
    2.-División, multiplicación y %
    3.-Sumas y restas
    */

    cout<<(5+5)/10+2*4-1<<endl;
    /*
    Primero hace la suma de los parentesis
    Segundo hace la división
    Tercero hace la multiplicación
    Cuarto hace la suma
    Quinto hace la resta
    */

    return 0;
}
