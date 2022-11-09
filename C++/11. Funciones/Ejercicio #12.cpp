/*12. Realice una función que tome como parámetros un vector y su tamaño y  diga si el vector está
ordenado crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para 
la 0, el elemento del vector es mayor o igual que el elemento que le precede en el vector.*/

#include<iostream>
using namespace std;

void PD();
void creciente(int vec[],int N);

int vec[100], N;

int main()
{
    PD();
    creciente(vec,N);

    return 0;
}

void PD()
{
    cout<<"Numero de elementos del vector: ";cin>>N;
    for (int i = 0; i < N; i++)
    {
        cout<<"Valor #"<<i+1<<": ";cin>>vec[i];
    }
}
void creciente(int vec[],int N)
{
    int C = 0;
    for (int i = 1; i < N; i++)
    {
        if (vec[i-1] > vec[i])
        {
            C++;
            break;
        }
    }

    if (C != 0)
    {
        cout<<"No es creciente"<<endl;
    }
    else
    {
        cout<<"Si es creciente"<<endl;
    }
}