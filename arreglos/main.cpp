#include <iostream>

using namespace std;

int main()
{
    cout << "Trabajando con arreglos" << endl;
    //declaración

    int a[]= {1,2,3,4};
    int b[4], c[4];
    int i=0;

    while(i<4)
    {
        b[i]=a[i];

        cout<<"Arreglo: "<<b[i]<<endl;
        i++;
    }
//declarando matrices
    int filas=2, columnas=2;
    int ma[filas][columnas];
    int n=2;

    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            n=n*2;
            ma[i][j]=n;
        }



    }

    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {

            cout<<"Desplegando matriz "<<"|F: "<<i<<"|C: "<<j<< " |Valor:" <<ma[i][j]<<endl;
        }



    }



    return 0;
}
