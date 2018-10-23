#include <iostream>

using namespace std;
//evita que se agregue std::cout en cada salida

int main()
{
    /*escapes

    \n  \b \r  \t

    */

    cout << "Buenos dias!" << endl;
    cout << "Buenos dias!\n" <<"Hola"<< endl;
    cout << "Buenos dias!\b" << endl;
    cout << "Buenos dias!\t"  <<"Hola"<< endl;
    cout << "Buenos dias!" << endl;
    cout << "Hasta luego!\r"  <<"Nos vemos"<< endl;


   cout <<"Desplegando valores"<<endl;

   int edad=10;
   char sexo='h';
   cout <<edad<<sexo<<endl;
    return 0;
}
