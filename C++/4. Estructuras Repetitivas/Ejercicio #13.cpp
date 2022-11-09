//13. Hacer un programa que realice la serie de fibonacci -> 1 1 2 3 5 8 13

#include<iostream>

using namespace std;

int main()
{
    int N = 0, x=0, y=1, z=1; 
    cout<<"Numero de elementos de la secuencia: ";cin>>N;
    for (int i = 1; i <= N; i++)
    {
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }
    cout<<"\n";
    return 0;
}
