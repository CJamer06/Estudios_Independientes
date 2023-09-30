//6. Convertir dos cadenas de minusculas a MAYUSCULAS. Comparar, y decir si son iguales o no.


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[] = "Ejemplo en minuscula";
    char CAD2[] = "Ejemplo en minuscula dos";

    cout<<CAD<<endl;
    cout<<CAD2<<endl;

    strupr(CAD);
    strupr(CAD2);

    if (strcmp(CAD,CAD2)==0)
    {
        cout<<"Las cadenas son iguales"<<endl;
    }
    else
    {
        cout<<"Las cadenas no son iguales"<<endl;
    }
    return 0;
}