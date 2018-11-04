#include <iostream>

using namespace std;

struct alumno
{
    char nombre[20];
    int semestre;

} alum,*puntero_alumno=&alum;


void registrarAlumno();


int main()
{
    registrarAlumno();
    return 0;
}


void registrarAlumno()
{

    cout<<"Cual es tu nombre?";
    cin.getline(puntero_alumno->nombre,30,'\n');
    cout<<"En que semestre estas?";
    cin>>puntero_alumno->semestre;

}
