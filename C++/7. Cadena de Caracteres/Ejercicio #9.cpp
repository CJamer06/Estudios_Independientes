/*9. Realice un programa que lea una cadea de caractres de la entrada estandar y muestre en la salida estadar cuantas ocurren
cias de cada vocal existen en la cadena.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[100];
    int a = 0, e = 0, i = 0, o = 0, u = 0, NUM;

    cout<<"Ingrese una frace: ";cin.getline(CAD,100,'\n');

    NUM = strlen(CAD);

    for (int n = 0; n < NUM; n++)
    {
        if (CAD[n] == 'a' || CAD[n] == 'A')
        {
            a++;
        }
        else if (CAD[n] == 'e' || CAD[n] == 'E')
        {
            e++;
        }
        else if (CAD[n] == 'i' || CAD[n] == 'I')
        {
            i++;
        }
        else if (CAD[n] == 'o' || CAD[n] == 'O')
        {
            o++;
        }
        else if (CAD[n] == 'u' || CAD[n] == 'U')
        {
            u++;
        }
    }
    
    cout<<"\nEn la cadena ahí "<<a<<" vocales a"<<endl;
    cout<<"En la cadena ahí "<<e<<" vocales e"<<endl;
    cout<<"En la cadena ahí "<<i<<" vocales i"<<endl;
    cout<<"En la cadena ahí "<<o<<" vocales o"<<endl;
    cout<<"En la cadena ahí "<<u<<" vocales u"<<endl;
    return 0;
}
