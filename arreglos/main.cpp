#include <iostream>

using namespace std;

int main()
{
    cout << "Trabajando con arreglos" << endl;
    //declaración

    int a[]={1,2,3,4};
    int b[5];
    int i=0;

    while(i<4)
    {
        b[i]=a[i];

        cout<<"Arreglo: "<<b[i]<<endl;
        i++;
    }



    return 0;
}
