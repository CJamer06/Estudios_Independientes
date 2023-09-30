/*4. Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos: Nombre, edad,
promedio, pedir datos al usuario para 3 alumnos, comprobar cual tiene el mejor promedio y posterior
mente imprimir los datos del alumno.
*/

#include<iostream>

using namespace std;

struct Alumno
{
    char Nombre[30];
    int edad;
    float promedio;
};

int main()
{
    int N = 3, MAY = 0, MP;
    struct Alumno A[N];

    for (int i = 0; i < N; i++)
    {
        cin.ignore(); //Limpia el buffer
        cout<<"Registro del alumno "<<i+1<<endl;
        cout<<"Nombre: ";cin.getline(A[i].Nombre,30,'\n');
        cout<<"Edad: ";cin>>A[i].edad;
        cout<<"Promedio: ";cin>>A[i].promedio;

        if (A[i].promedio > MAY)
        {
            MAY = A[i].promedio;
            MP = i;
        }
        cout<<endl;
    }

    cout<<"El mejor promedio es de: "<<endl;
    cout<<"Nombre: "<<A[MP].Nombre<<endl;
    cout<<"Edad: "<<A[MP].edad<<endl;
    cout<<"Promedio: "<<A[MP].promedio<<endl;
    return 0;
}
