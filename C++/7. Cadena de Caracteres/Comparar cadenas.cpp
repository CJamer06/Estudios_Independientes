/*Comparar cadenas - función strcmp()
    Compara la igualdad de las cadenas de igual forma nos informa cual de las 2 es mayor alfabeticamente hablando.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[] = "Hola", NOM[40];
    char CAD2[] = "hola", NOM2[40];

    if(strcmp(CAD,CAD2) == 0)
    {
        cout<<"Cadena 1: "<<CAD<<endl<<"Cadena 2: "<<CAD2<<endl;
        cout<<"Ambas cadenas son iguales"<<endl;
    }
    else
    {
        cout<<"Cadena 1: "<<CAD<<endl<<"Cadena 2: "<<CAD2<<endl;
        cout<<"Las cadenas no son iguales"<<endl;
    }

    cout<<"Ingrese un nombre: ";cin.getline(NOM,40,'\n');
    cout<<"Ingrese otro nombre: ";cin.getline(NOM2,40,'\n');

    if(strcmp(NOM,NOM2) > 0)
    {
        cout<<NOM<<" es menor alfabeticamente"<<endl;
    }
    else
    {
        cout<<NOM2<<" es menor alfabeticamente"<<endl;
    }
    
    return 0;
}