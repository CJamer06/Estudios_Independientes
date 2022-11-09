//Pasar una palabra a minuscula - Funcion striwr()

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[] = "EJEMPLO EN MAYUSCULA";

    cout<<CAD<<endl;
    
    striwr(CAD);

    cout<<CAD<<endl;
    return 0;
}