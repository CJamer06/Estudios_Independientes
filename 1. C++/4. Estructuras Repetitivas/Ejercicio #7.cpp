//7. Escriba un programa que calcule el valor de 1+2+3+...+n

#include <iostream>

using namespace std;

int main()
{
    int n = 0, SUM = 0;
    cout<<"Digite el valor hasta el que desea sumar: ";cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<i;
        SUM += i;
        if(i!=n)
        {
            cout<<"+";
        }
    }
    cout<<" = "<<SUM<<endl;
    return 0;
}