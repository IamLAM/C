#include <iostream>

using namespace std;

int main()
{
    int i,maximo;
    cout << "Manejo de while, do-while y for: Proporciona un valor" << endl;
    cin>>maximo;
    i=0;
    while(i<maximo)
        {cout<<"(while)Iteraci�n: "<<i<<endl;
         i++;

        }

    i=0;
    do{
        cout<<"(do-while)Iteraci�n: "<<i<<endl;
         i++;

    }while(i<maximo);

    for(i=0;i<maximo;i++){
        cout<<"(for)Iteraci�n: "<<i<<endl;
    }
    return 0;
}
