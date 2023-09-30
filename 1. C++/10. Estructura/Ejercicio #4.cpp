/*4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: 
numero_medallas, nombre, pais. y devuelva los datos (Nombre, pais) del atleta que ha ganado el mayor 
numero de medallas.
*/

#include<iostream>
#include<string.h>

using namespace std;

struct atleta
{
    char pais[60];
    char Nombre[50];
    int numero_medallas;
};

int main()
{
    int n, MAY = 0, GM = 0;
    cout<<"Ingrese el numero de Atletas: ";cin>>n;
    struct atleta A[n];

    for (int i = 0; i < n; i++)
    {
       cin.ignore();
       cout<<"Registro de atleta "<<i+1<<endl;
       cout<<"Nombre: ";cin.getline(A[i].Nombre,50,'\n');
       cout<<"País: ";cin.getline(A[i].pais,50,'\n');
       cout<<"Medallas ganadas: ";cin>>A[i].numero_medallas;

       if(A[i].numero_medallas > MAY)
       {
           MAY = A[n].numero_medallas;
           GM = i;
       }
       cout<<endl;
    }
    
    cout<<"EL atleta con mas medallas es "<<A[GM].Nombre<<" de "<<A[GM].pais<<endl;

    return 0;
}