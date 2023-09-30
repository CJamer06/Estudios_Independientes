//12. Hacer un programa que calcule el resultado de la siguiete exprecion: 1-2+3-4+5-6...n

#include <iostream>

using namespace std;

int main()
{
    int N = 0, SUM = 0;

    cout<<"Numero de valores a sumar o restar: ";cin>>N;
    for (int i = 1; i <= N; i++)
    {
        if (i%2 != 0)
        {
           if (i != 1)
           {
                cout<<"+";
           }
            cout<<i;
            SUM += i;
        }
        else
        {
            cout<<"-"<<i;
            SUM -= i;
        }
    }
    cout<<" = "<<SUM<<endl;
    return 0;
}