/*6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular 
cuál de todos tiene el mejor promedio, e imprimir sus datos.
*/

#include<iostream>
#include<string.h>

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
    int N, MEP;

    cout<<"Numero de alumnos: ";cin>>N;

    float PRO[N], MPRO = 0;
    struct ALUM NA[N];

    for (int i = 0; i < N; i++)
    {
        cout<<"Estudiante #"<<i+1<<endl;
        cin.ignore();
        cout<<"Nombre: ";cin.getline(NA[i].NOM,50,'\n');
        cout<<"Sexo [M ó F]: ";cin>>NA[i].SEX;
        if(strcmp(NA[i].SEX,"m") == 0)
        {
            strcpy(NA[i].SEX,"M");
        }
        else if(strcmp(NA[i].SEX,"f") == 0)
        {
            strcpy(NA[i].SEX,"F");
        }
        cout<<"Edad: ";cin>>NA[i].EDAD;
        cout<<"Nota 1: ";cin>>NA[i].NOTAS.NOT1;
        cout<<"Nota 2: ";cin>>NA[i].NOTAS.NOT2;
        cout<<"Nota 3: ";cin>>NA[i].NOTAS.NOT3;

        PRO[i] = (NA[i].NOTAS.NOT1 + NA[i].NOTAS.NOT2 + NA[i].NOTAS.NOT3)/3;
        if (MPRO < PRO[i])
        {
            MEP = i;
            MPRO = PRO[i];
        }
        cout<<endl;
    }
    
    cout<<"\nDatos del alumno con mejor promedio\n";
    cout<<"Nombre: "<<NA[MEP].NOM<<endl;
    cout<<"Edad: "<<NA[MEP].EDAD<<endl;
    cout<<"Sexo [M ó F]: "<<NA[MEP].SEX<<endl;
    cout<<"Nota 1: "<<NA[MEP].NOTAS.NOT1<<endl;
    cout<<"Nota 2: "<<NA[MEP].NOTAS.NOT2<<endl;
    cout<<"Nota 3: "<<NA[MEP].NOTAS.NOT3<<endl;
    cout<<"Promedio: "<<MPRO<<endl;
    
    return 0;
}