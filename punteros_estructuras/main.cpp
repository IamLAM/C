#include <iostream>

using namespace std;

struct alumno
{
    char nombre[20];
    int semestre;

} alum,*puntero_alumno=&alum;


void registrarAlumno();
void mostrarAlumno();


int main()
{
    registrarAlumno();
    mostrarAlumno();

    return 0;
}

void mostrarAlumno(){

cout<<"Mi nombre es:"<<puntero_alumno->nombre<<" y voy en el semestre: "<<puntero_alumno->semestre<<endl;

}

void registrarAlumno()
{

    cout<<"Cual es tu nombre?";
    cin.getline(puntero_alumno->nombre,30,'\n');
    cout<<"En que semestre estas?";
    cin>>puntero_alumno->semestre;

}
