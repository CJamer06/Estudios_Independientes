//8. Escriba un programa que calcule el valor de 1+3+5+...2n-1

#include<iostream>

using namespace std;

int main()
{
    int n = 0, SUM = 0;

    cout<<"Digite el valor de elementos de la sucesion: ";cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<((2*i)-1);
        SUM += (2*i)-1;
        if(i < n)
        {
            cout<<"+";
        }
    }
    cout<<" = "<<SUM<<endl;
    return 0;
}
