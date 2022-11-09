//20: Realice una función recursiva para la serie Fibonacci 

#include<iostream>

using namespace std;

int PD();
void Fibonacci(int,int, int, int);
int main()
{
    int N, Fibo = 1, Aux = 0, Aux2 = 0;
    N = PD();
    Fibonacci(Fibo,N, Aux, Aux2);

    return 0;
}

int PD()
{
    int N;
    cout<<"Digite el numero de elementos: ";cin>>N;
    return N;
}

void Fibonacci(int Fibo, int N, int Aux, int Aux2)
{
    if (1 < N)
    {
        Aux2 = Fibo;
        cout<<Fibo<<", ";
        Fibo += Aux;
        Aux = Aux2;
        return Fibonacci(Fibo, N-1, Aux, Aux2);
    }
    else if (1 == N)
    {
        Aux2 = Fibo;
        cout<<Fibo<<"."<<endl;
        Fibo += Aux;
        Aux = Aux2;
        return Fibonacci(Fibo, N-1, Aux, Aux2);
    }
    else
    {
        cout<<"0";
    }
}