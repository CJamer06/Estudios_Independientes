/*8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo
arreglo*/

#include <iostream>

using namespace std;

int main()
{
    int ARR1[5], ARR2[5]; 

    for (int i = 0; i < 5; i++)
    {
        cout<<"Valor #"<<i+1<<": ";cin>>ARR1[i];
        ARR2[i] = (ARR1[i]*2);
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<ARR2[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}