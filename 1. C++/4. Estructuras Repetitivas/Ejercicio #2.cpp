/*2. Realice un programa que lea de la entrada estandar numeros hasta que se introduzca un
cero. En ese momento el programa debe terminar y mostrar en la salida estandar el numero de 
valores mayores que 0 leidos*/

#include<iostream>

using namespace std;

int main()
{
    int i = 0;
    int N = 0;

    do
    {
        cout<<"Ingrese un valor: ";cin>>N;
        if (N > 0)
        {
            i++;
        }
        
    } while (N != 0);
    
    cout<<"El numero total de valores mayores a 0 es: "<<i<<endl;
    return 0;
}