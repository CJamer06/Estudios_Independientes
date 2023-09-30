 /* La sentencia while:

    while (Exprecion logica)
    {
        conjunto de instrucciones;
    }
*/

#include<iostream>

using namespace std;

int main()
{
    int i = 0;
    while (i<=10) //Se declaran las condiciones
    {
        cout<<i<<endl;

        i++; // i = i+1; i += 1;
    }
    
    return 0;
}
    