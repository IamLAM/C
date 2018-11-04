#include <iostream>

using namespace std;

struct alumno
{
    char nombre[20];
    int semestre;

} alum,*puntero_alumno=&alum;


void registrarAlumno();
void mostrarAlumno(alumno *);


int main()
{
    registrarAlumno();
    mostrarAlumno(puntero_alumno);

    return 0;
}

void mostrarAlumno(alumno *al){

cout<<"Mi nombre es:"<<al->nombre<<" y voy en el semestre: "<<al->semestre<<endl;

}

void registrarAlumno()
{

    cout<<"Cual es tu nombre?";
    cin.getline(puntero_alumno->nombre,30,'\n');
    cout<<"En que semestre estas?";
    cin>>puntero_alumno->semestre;

}
