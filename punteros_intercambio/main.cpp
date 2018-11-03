#include <iostream>

using namespace std;

void cambiar(int *,int *);


int main()
{   int a=5,b=10;


    cambiar(&a,&b);
    return 0;
}

void cambiar(int *a,int *b){

int t;
t=*a;
*a=*b;
*b=t;


}
