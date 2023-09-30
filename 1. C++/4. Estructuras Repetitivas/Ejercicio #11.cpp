//11. Calcule un programa que calcule el valor de 2¹+2²+2³+...2^n

#include <iostream>

using namespace std;

int main()
{
    int N = 0, SUM = 0, POW = 1;
    cout<<"Ingrese en numero de exponentes: ";cin>>N;

    for (int i = 1; i <= N; i++)
    {
        cout<<"2^"<<i;
        POW = 1;
        for (int o = 1; o <= i; o++)
        {
            POW *= 2;    
        }
        SUM += POW;
        if(i < N)
        {
            cout<<" + ";
        }
    }
    cout<<" = "<<SUM<<endl;
    return 0;
}