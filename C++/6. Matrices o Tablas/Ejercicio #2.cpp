/*2. Relaiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la 
matriz.*/

#include <iostream>

using namespace std;

int main()
{
    int MAT[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout<<"Valor ["<<i<<"]["<<o<<"]: "<<MAT[i][o]<<endl;
        }
        cout<<endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            if (i == o)
            {
                cout<<"["<<MAT[i][o]<<"]";
            } 
            else
            {
                cout<<"[-]";
            }
        }
        cout<<endl;
    }
    
    return 0;
}