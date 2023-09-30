//Pasar una palabra a MAYUSCULA - función strupr()

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[] = "Ejemplo en minuscula";

    cout<<CAD<<endl;
    
    strupr(CAD);

    cout<<CAD<<endl;
    return 0;
}