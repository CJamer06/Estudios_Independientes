//Estructura Basica en C++

#include <iostream>

using namespace std;

struct persona
{
    char nombre[30];
    int edad;
    int altura;
}
persona1 = {"Alejandro",20},
persona2 = {"Carlos",19};

int main()
{
    cout<<"El nombre de la persona 1 es: "<<persona1.nombre<<endl;
    cout<<"La edad de la persona 1 es: "<<persona1.edad<<endl;

    cout<<"\nIngresa tu estatura: "; cin>>persona2.altura;
    cout<<"El nombre de la persona 2 es: "<<persona2.nombre<<endl;
    cout<<"La edad de la persona 2 es: "<<persona2.edad<<endl;
    cout<<"La altura de la persona 2 es: "<<persona2.altura<<endl;
    return 0;
}