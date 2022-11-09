/*5. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; 
y otro llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad; hacer que la estructura 
promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego 
calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.*/

#include<iostream>

using namespace std;

struct PROME
{
    float NOT1, NOT2, NOT3;
};

struct ALUM
{
    char NOM[50], SEX[1];
    int EDAD;
    struct PROME NOTAS;    
};

int main()
{
    int N;
    float PRO;
    struct ALUM NA;

    cout<<"Nombre: ";cin.getline(NA.NOM,50,'\n');
    cout<<"Sexo [M ó F]: ";cin>>NA.SEX;
    cout<<"Edad: ";cin>>NA.EDAD;
    cout<<"Nota 1: ";cin>>NA.NOTAS.NOT1;
    cout<<"Nota 2: ";cin>>NA.NOTAS.NOT2;
    cout<<"Nota 3: ";cin>>NA.NOTAS.NOT3;

    PRO = (NA.NOTAS.NOT1 + NA.NOTAS.NOT2 + NA.NOTAS.NOT3)/3;

    cout<<"\nDatos de alumno\n";
    cout<<"Nombre: "<<NA.NOM<<endl;
    cout<<"Edad: "<<NA.EDAD<<endl;
    cout<<"Sexo [M ó F]: "<<NA.SEX<<endl;
    cout<<"Nota 1: "<<NA.NOTAS.NOT1<<endl;
    cout<<"Nota 2: "<<NA.NOTAS.NOT2<<endl;
    cout<<"Nota 3: "<<NA.NOTAS.NOT3<<endl;
    cout<<"Promedio: "<<PRO<<endl;
    
    return 0;
}