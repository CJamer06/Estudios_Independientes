/*4. Rellena un arreglo con n numeros, posterior mente utilizando punteros determinar el menor elemento
del arreglo.

*/

#include<iostream>

using namespace std;

int main()
{
    int n, MEN = 999999;
    cout<<"Digite el numero de elementos del vector: ";cin>>n;

    int Vec[n], *p;

    p = Vec;

    for (int i = 0; i < n; i++)
    {
        cout<<"Valor ["<<i<<"]: "; cin>>Vec[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (*p < MEN)
        {
            MEN = *p;
        }
        p++;
    }
    
    cout<<"El numero menor es: "<<MEN<<endl;

    system("pause");
    return 0;
}