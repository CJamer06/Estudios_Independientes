//5. Hacer un programa que determine si una palabra es polindroma 

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[30], CAD2[30];

    cout<<"Ingrese una palabra: ";cin.getline(CAD,30,'\n');

    strcpy(CAD2,CAD);
    strrev(CAD2);

    if (strcmp(CAD2,CAD) == 0)
    {
        cout<<"Si es polindroma"<<endl;
    }
    else
    {
        cout<<"No es polindroma"<<endl;
    }
    return 0;
}