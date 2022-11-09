/*2. Determinar si un número es primo o no; con puteros y además indicar en que posición de memoria 
se guardo el número.*/

#include<iostream>

using namespace std;

int main()
{
    int N, C = 1;
    int *p;

    cout<<"Digite un valor: ";cin>>N;

    p = &N;

    for (int i = 1; i < *p; i++)
    {
        if (*p%i == 0)
            C++;
    }
    
    if (C > 2)
        cout<<"El numero no es primo"<<endl;
    else if (C == 2)
        cout<<"El numero es primo"<<endl;
    
    cout<<"Direccion de memoria: "<<p<<endl;
    return 0;
}