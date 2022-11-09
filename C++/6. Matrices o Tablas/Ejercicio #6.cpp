//6. Realizar un programa que calcule la suma de 2 matrices cuadradas de 3*3.

#include<iostream>

using namespace std;

int main()
{
    int MAT1[3][3], MAT2[3][3], MATS[3][3];

    cout<<"Rellenar Matriz 1\n";

    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout<<"Punto ["<<i<<"]["<<o<<"]: ";cin>>MAT1[i][o];
        }
    }
    
    cout<<"\nRellenar Matriz 2\n";

    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout<<"Punto ["<<i<<"]["<<o<<"]: ";cin>>MAT2[i][o];
        }
    }


    cout<<"\nMatriz Suma\n";

    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout<<"["<<MAT2[i][o] + MAT1[i][o]<<"]";
        }
        cout<<"\n";
    }
    return 0;
}