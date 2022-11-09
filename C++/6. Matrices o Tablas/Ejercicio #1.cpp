/*1. Realice un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas, posteriormente mostar
la matriz en pantalla.*/

#include <iostream>

using namespace std;

int main()
{
    int MAT[100][100], FIL = 0, COL = 0;

    cout<<"Ingrese el numero de filas: ";cin>>FIL;
    cout<<"Ingrese el numero de columnas: ";cin>>COL;

    for (int i = 0; i < FIL; i++)
    {
        for (int o = 0; o < COL; o++)
        {
            cout<<"Valor ["<<i<<"]["<<o<<"]: ";cin>>MAT[i][o];
        }
        
    }
    
    for (int i = 0; i < FIL; i++)
    {
        for (int o = 0; o < COL; o++)
        {
            cout<<"["<<MAT[i][o]<<"] ";
        }
        cout<<endl;
    }
    return 0;
}