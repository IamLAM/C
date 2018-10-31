#include <iostream>
#include<stdlib.h>

using namespace std;

int n, *pc;
void obtenerNota();
void desplegarNota();
int main()
{
    obtenerNota();
    desplegarNota();



    return 0;
}

void obtenerNota(){
int i=0;

cout<<"Proporciona el numero de notas para almacenar"<<endl;
cin>>n;
pc=new int[n];

while(i<n){

    cout<<"indica tu calificación["<<i<<"]"<<":";
    cin>>pc[i];
    i++;
    }

}


void desplegarNota(){
int i=0;
cout<<"Mostrar notas del alumno"<<endl;
while(i<n){

    cout<<"Nota ["<<i<<"]:"<<pc[i]<<endl;
    i++;
}
}
