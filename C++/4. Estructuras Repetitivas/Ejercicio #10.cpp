//10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (Suma de factoriales)

#include <iostream>

using namespace std;

int main()
{
    int N = 0, FAC = 1, SUM = 0;

    cout<<"Ingrese los el numero de valores a factorizar: ";cin>>N;
    for (int i = 1; i <= N; i++)
    {
        FAC = 1;

        cout<<i<<"!";
        for (int o = 1; o <= i; o++)
        {
            FAC *= o;
        }

        SUM += FAC;

        if (i<N)
        {
            cout<<" + ";
        }
    }
    cout<<" = "<<SUM<<endl;
    return 0;
}