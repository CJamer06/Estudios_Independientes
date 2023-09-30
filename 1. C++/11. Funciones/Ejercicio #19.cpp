//19. Realice una función recursiva que sume los primeros n enteros positivos.

#include<iostream>

using namespace std;

int PD();
int SUMA(int, int);
int Mostrar(int);

int main()
{
    int N, SUM = 0;
    N = PD();
    Mostrar(N);
    cout<<" = "<<SUMA(N,SUM);

    cout<<endl;
    return 0;
}
int PD()
{
    int N;
    cout<<"Numero de elementos a sumar: ";cin>>N;
    return N;
}

int Mostrar(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout<<i;
        if (i < N)
        {
            cout<<"+";
        }    
    }
}

int SUMA(int N, int SUM)
{
    if (N >= 1)
    {
        SUM += N; 
        return SUMA(N-1,SUM);
    }
    else if (N == 1)
    {
        return SUM;
    }
}