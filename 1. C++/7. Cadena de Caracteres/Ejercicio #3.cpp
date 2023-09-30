/*3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar
indicar cual es mayor alfabeticamente.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char CAD[40], CAD2[40];

    cout<<"Ingrese un cadena: ";cin.getline(CAD,40,'\n');
    cout<<"Ingrese otro cadena: ";cin.getline(CAD2,40,'\n');

    if(strcmp(CAD,CAD2) == 0)
    {
        cout<<"Ambas cadenas son iguales"<<endl;
    }
    else if(strcmp(CAD,CAD2) > 0)
    {
        cout<<CAD2<<" es menor alfabeticamente"<<endl;
    }
    else
    {
        cout<<CAD<<" es menor alfabeticamente"<<endl;
    }
    return 0;
}