//Entrada y salida
#include <iostream>

using namespace std; 

int main()
{
    int a = 0, b=0, sum=0, res=0, mult = 0;
    float div = 0;

    cout<<"Ingrese los valores: \n";
    cout<<"Numero 1: ";
    cin>>a;
    cout<<"Numero 2:";
    cin>>b;

    sum = a+b;
    res = a-b;
    mult = a*b;
    div = a/b;

    cout<<"\nSuma = "<<sum<<endl;
    cout<<"Resta = "<<res<<endl;
    cout<<"Multiplicación = "<<mult<<endl;
    cout<<"Division = "<<div<<endl;
    return 0;
}
