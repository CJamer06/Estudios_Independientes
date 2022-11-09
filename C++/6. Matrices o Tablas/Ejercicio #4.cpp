/*4. Hacer una matriz preguntando al ususario el numero de filas y columnas, llenarla de numeros aleatorios, copiar el 
conteido a otra matriz y por ultimo mostrarla en pantalla */

#include<iostream>

using namespace std;

int main()
{
    int FIL = 0, COL = 0, MAT1[100][100], MAT2[100][100]; 
    cout<<"Numero de Filas: ";cin>>FIL;
    cout<<"Numero de columnas: ";cin>>COL;

    for (int i = 0; i < FIL; i++)
    {
        for (int o = 0; o < COL; o++)
        {
            cout<<"Punto ["<<i<<"]["<<o<<"]";cin>>MAT1[i][o];
            MAT2[i][o] = MAT1[i][o];
        }
    }

    for (int i = 0; i < FIL; i++)
    {
        for (int o = 0; o < COL; o++)
        {
            cout<<"["<<MAT2[i][o]<<"]";
        }
        cout<<endl;
    }
    
    return 0;
}