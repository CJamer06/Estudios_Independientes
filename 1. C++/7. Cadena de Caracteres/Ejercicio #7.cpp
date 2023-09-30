/*7. Pedir su nombre al usuario en MAYUSCULA, si su nombre em pieza por la letra "A", convertir su nombre a minuscula, caso 
contrario mo convertir*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[30];

    cout<<"Ingrese su nombre en mayuscula: ";cin.getline(CAD,30,'\n');
    
    if (CAD[0] == 'A'){
        strupr(CAD);
        cout<<CAD<<endl;
    }
    else{
        cout<<CAD<<endl;
    }
    return 0;
}