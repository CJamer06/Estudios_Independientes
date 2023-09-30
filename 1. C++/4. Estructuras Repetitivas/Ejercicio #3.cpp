/*3. Realice un programa que calcule y muetre en la salida estandar la suma de los cuadrados
de los 10 primeros enteros mayores que cero*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int suma = 0, cuadrado = 0;

    for (int i = 0; i <= 10; i++)
    {
        cuadrado = i * i;
        suma += cuadrado;
    }
    
    cout<<"La suma es igual a "<<suma<<endl;
    return 0;
}