/*3. Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales son números
pares y su posición en memoria.

*/

#include<iostream>

using namespace std;

int main()
{
    int Vec[10], *p;

    p = Vec;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Valor #"<<i+1<<": ";cin>>Vec[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (*p%2 == 0)
        {
            cout<<"El numero "<<*p<<" es par."<<endl;
            cout<<"Esta en la direccion: "<<p<<endl;
        }
        cout<<endl;  
        p++;
    }

    return 0;
}