#include <iostream>

using namespace std;

int main()
{
    cout << "Condiciones" << endl;
    int a=2,b=5,c;

    if(a>5)
        cout<<"Si es mayor: "<<a<<endl;
    else
        cout<<"Lo siento es menor: "<<a<<endl;



    /*comparando con diversos valores*/
    cout<<"Proporciona un valor"<<endl;
    cin>>c;
    switch(c)
    {
    case 1:
        cout<<"Es diferente a 1 "<<a<<endl;
        break;

    case 2:
        cout<<"Es diferente a 2 "<<a<<endl;
        break;

    case 3:
        cout<<"Es diferente a 3 "<<a<<endl;
        break;
    default:
        cout<<"El valor no fue encontrado";

    }



    return 0;
}
