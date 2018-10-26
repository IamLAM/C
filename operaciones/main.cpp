#include <iostream>
#include <math.h>

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

    //Uso de libreria math y constantes
    double raiz=sqrt(124);
    double potencia=pow(2,2);
    double seno=sin(124);
    double coseno=cos(124);
    cout<<raiz<<endl;
    cout<<potencia<<endl;
    cout<<seno<<endl;
    cout<<coseno<<endl;

    /*Obtendremos valores de figuras geometricas*/

    float resultado,base,altura;

    cout<<"Area de un triangulo"<<endl;
    cout<<"Cual es la base"<<endl;
    cin>>base;
    cout<<"Cual es la altura"<<endl;
    cin>>altura;
    resultado=(base*altura)/2;
    cout<<resultado<<endl;

    return 0;
}
