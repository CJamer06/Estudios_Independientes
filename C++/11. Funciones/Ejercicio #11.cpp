/*11. Realice una función que tome como parámetros un vector de números enteros y devuelva la suma de 
sus elementos.
*/

#include<iostream>

using namespace std;

void PD();
int Suma(int vec[],int N);

int vec[100],N;

int main()
{
    PD();
    cout<<"El valor de la suma es: "<<Suma(vec,N)<<endl;
    return 0;
}

void PD()
{
    cout<<"Digite el numero de elementos de un vector: ";cin>>N;

    for (int i = 0; i < N; i++)
    {
        cout<<"Elemento #"<<i+1<<" : ";
        cin>>vec[i];
    }
}

int Suma(int vec[], int N)
{
    int Sum = 0;
    for (int i = 0; i < N; i++)
    {
        Sum += vec[i]; 
    }
    return Sum;
}