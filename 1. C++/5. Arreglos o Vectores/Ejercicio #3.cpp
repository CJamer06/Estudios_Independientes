/*3. Escriba un programa que lea de la entrada estandar un vector de numero y muetre en la salida estandar los numeros del 
vector cosn sus indices asociados*/

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
    
    for (int i = 0; i < NUM; i++)
    {
        cout<<i<<" -> "<<numeros[i]<<endl;
    }
    return 0;
}