/*6. Excriba un programa que defina un vector de numeros y calcule si existe algun umero en el vector cuyo valor equivale
a la suma del resto de numeros del vector*/

#include <iostream>

using namespace std;

int main()
{
    int NUM = 0, SUM = 0, NUME[100], VS = 0;
    cout<<"Ingrese el numero de elementos: ";cin>>NUM;

    for (int i = 0; i < NUM; i++)
    {
        cout<<"Valor #"<<i+1<<": ";cin>>NUME[i];
        SUM += NUME[i];
    }

     for (int i = 0; i < NUM; i++)
    {
       if(NUME[i] == (SUM - NUME[i]))
       {
           cout<<"El valor #"<<i+1<<" = "<<NUME[i]<<" es igual a la suma de los demas "<<endl;
       }
    }
    
    return 0;
}