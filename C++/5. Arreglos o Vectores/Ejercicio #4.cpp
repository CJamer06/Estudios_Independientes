/*4. Escribe un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso - del
último al primer elemento*/

#include<iostream>

using namespace std;

int main()
{
    int numeros[100], NUM = 0;
    cout<<"Digite el numero de elemnetos a ingresar: ";cin>>NUM;

    for (int i = 0; i < NUM; i++)
    {
        cout<<"Digite un numero: ";cin>>numeros[i];
    }
    
    for (int i = NUM - 1; i >= 0; i--)
    {
        cout<<i<<" -> "<<numeros[i]<<endl;
    }
    return 0;
}