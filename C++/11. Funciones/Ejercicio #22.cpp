/*22. Escriba una función escribeNumeros(int ini, int fin) que devuelva en la salida estándar los 
números del ini al fin. Escriba una versión que escriba los números en orden ascendente.*/

#include<iostream>

using namespace std;

void PD(int& , int& );
int escribeNumero(int, int);

int main()
{
    int ini, fin;

    PD(ini, fin);

    if (ini > fin)
        cout<<"Valores errados"<<endl;
    else
        escribeNumero(ini, fin);
        
    return 0;
}

void PD(int& ini, int& fin)
{
    cout<<"Numero inicial: ";cin>>ini;
    cout<<"Numero final: ";cin>>fin;
}

int escribeNumero(int ini, int fin)
{
    if (ini < fin)
    {
        cout<<ini<<", ";
        return escribeNumero(ini+1,fin);
    }
    else if (ini == fin)
    {
        cout<<ini<<"."<<endl;
    }
}
