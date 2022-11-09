/*13. Realiza una función que tome como parámetros un vector de números y su tamaño y cambie el signo
 de los elementos del vector.
*/

#include<iostream>

using namespace std;

void PD();
void cambio(int vec[], int N);

int N, vec[100];

int main()
{
    PD();
    cambio(vec,N);

    return 0;
}

void PD()
{
    cout<<"Digite el numero de elementos: ";cin>>N;
    for (int i = 0; i < N; i++)
    {
        cout<<"Valor #"<<i+1<<": ";cin>>vec[i];
    }
}

void cambio(int vec[], int N)
{
    cout<<"Cambio de signo: "<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"valor #"<<i+1<<": "<<(-1) * vec[i]<<endl;
    }
}