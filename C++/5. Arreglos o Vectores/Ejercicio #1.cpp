//1. Escribe un programa que defina un vector y calcule la suma de sus elementos

#include<iostream>

using namespace std;

int main()
{
    int numeros[] = {1,2,3,4,5}, SUM = 0;

    for (int i = 0; i < 5; i++)
    {
        cout<<numeros[i];
        SUM += numeros[i]; 
        if (i < 4)
        {
            cout<<" + ";
        }
    }
    cout<<" = "<<SUM<<endl;
    return 0;
}