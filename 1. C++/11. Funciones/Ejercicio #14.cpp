/*14. Realiza una función que tome como parámetros un vector de enteros y su tamaño e imprima un 
vector con los elementos impares del vector recibido.
*/

#include<iostream>
using namespace std;

void PD();
void impar(int vec[], int N);

int vec[100], N;

int main()
{
    PD();
    impar(vec,N);
    return 0;
}

void PD()
{
    cout<<"Numero de elementos: ";cin>>N;
    for (int i = 0; i < N; i++)
    {
        cout<<"Valor #"<<i+1<<": ";cin>>vec[i];
    }
}

void impar(int vec[], int N)
{
    cout<<"Valores impares: "<<endl;
    for (int i = 0; i < N; i++)
    {
        if(vec[i]%2 != 0)
        {
            cout<<"Valor #"<<i+1<<": "<<vec[i]<<endl;
        }
    }   
}