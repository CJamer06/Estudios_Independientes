/*2. Escribe un programa que defina un vector de numero y calcule la multiplicacion acumulada de sus elementos.*/

#include<iostream>

using namespace std;

int main()
{
    int numeros[] = {1,2,3,4,5}, PRO = 1;

    for (int i = 0; i < 5; i++)
    {
        cout<<numeros[i];
        PRO *= numeros[i]; 
        if (i < 4)
        {
            cout<<" + ";
        }
    }
    cout<<" = "<<PRO<<endl;
    return 0;
}