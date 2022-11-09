//2. Ejercicio de estructuras anidadas.

#include <iostream>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[30];
    char provincia[30];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;  //Llamamos a la estructura anidada anterior.
    double salario;
}empleados[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        //Limpiamos el bafer para que no se llene de basura.
        fflush(stdin);
        cout<<"Digite su nombre: ";cin.getline(empleados[i].nombre, 20,'\n');
        cout<<"Digite su direccion: ";cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Ciudad: ";cin.getline(empleados[i].dir_empleado.ciudad,30,'\n');
        cout<<"Provincia: ";cin.getline(empleados[i].dir_empleado.provincia,30,'\n');
        cout<<"Salario: ";cin>>empleados[i].salario;
        cout<<"\n";
    }

    //Imprimir datos

    for (int i = 0; i < 2; i++)
    {
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<"\n";
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<"\n";
        cout<<"Salario: "<<empleados[i].salario;
        cout<<"\n";
    }
    
    return 0;
}