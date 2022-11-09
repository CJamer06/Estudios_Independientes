/*7. Desarrolla un programa que determine si una matriz es simetrica o no. Una matriz es simetrica si es cuadrada y si es 
igual a su mariz transpuesta
|8 3 1|       |8 3 1|
|1 7 4|  =>   |1 7 4|
|3 4 9|       |3 4 9|

*/

#include <iostream>

using namespace std;

int main()
{
    int NUM[100][100], FIL = 0, COL = 0;
    char band = 'f';

    cout<<"Numero de Filas: "; cin>>FIL;
    cout<<"Numero de Columnas: ";cin>>COL;

    for (int i = 0; i < FIL; i++)
    {
        for (int o = 0; o < COL; o++)
        {
            cout<<"["<<i<<"]["<<o<<"]: ";cin>>NUM[i][o];
        }   
    }
    
    if(FIL == COL)
    {
        for (int i = 0; i < FIL; i++)
        {
            for (int o = 0; o < COL; o++)
            {
                if (NUM[i][o] == NUM[o][i])
                {
                    band = 'v';
                }
                else
                {
                    band = 'f';
                }
                
            }
        }
    }
    
    if (band == 'v')
    {
        cout<<"La matriz es simtrica"<<endl;
    }
    else
    {
        cout<<"La no matriz es simtrica"<<endl;
    }
    
    return 0;
}