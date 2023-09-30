//9. Escriba un programa que calcule el valor de 1*2*3*...*n (Factorial)
#include <iostream>

using namespace std;

int main()
{
    int n = 0, FAC = 1;

    cout<<"Digite el valor a factorizar: ";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        FAC *= i;
        cout<<i;
        if(i<n)
        {
            cout<<"*";
        } 
    }
    cout<<" = "<<FAC<<endl;
    return 0;
}