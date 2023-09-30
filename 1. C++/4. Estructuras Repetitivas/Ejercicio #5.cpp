/*5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango
(20-30) o se introduzca el valor 0. El programa debe en entregar la suma de los valores mayores
a 0 introducidos.*/

#include <iostream>

using namespace std;

int main()
{
    int NUM = 0, SUM = 0;
    do
    {
        cout<<"Ingrese un valor: ";cin>>NUM;
        if (NUM < 20 || NUM > 30)
        {
            SUM += NUM;
        }
        else
        {
            break;
        }
    } while (NUM != 0);
    cout<<"La suma de los valores es: "<<SUM<<endl;
    return 0;
}