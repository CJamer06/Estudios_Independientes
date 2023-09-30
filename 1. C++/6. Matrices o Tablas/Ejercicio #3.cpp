//3. Hacer una matriz de tipo entera 2*2, llenarla de numeros y luego copiar todo su contenido hacia otra matiz.

#include <iostream>

using namespace std;

int main()
{
    int MAT1[2][2], MAT2[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int o = 0; o < 2; o++)
        {
            cout<<"Valor ["<<i<<"]["<<o<<"]: ";cin>>MAT1[i][o];
            MAT2[i][o] = MAT1[i][o];
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int o = 0; o < 2; o++)
        {
            cout<<"["<<MAT2[i][o]<<"]";
        }
        cout<<endl;
    }
    
    return 0;
}