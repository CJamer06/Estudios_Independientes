/*5. Realice un programa que lea una matriz de 3*3 y cree su matriz transpuesta. La matriz transpuesta es aquella en la que 
la columna i era la fila i de la matriz original.

|1 2 3|     |1 4 7|
|4 5 6| =>  |2 5 8|
|7 8 9|     |3 6 9|

*/

#include <iostream>

using namespace std;

int main()
{
    int MAT[3][3];

    cout<<"\t --MATRIZ TRANSPUESTA--\n";
    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout<<"Punto ["<<i<<"]["<<o<<"]: ";cin>>MAT[i][o];
        }
    }
    cout<<"******************************************************\n";
    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout<<"["<<MAT[i][o]<<"]";
        }
        cout<<endl;
    }
    cout<<"******************************************************\n";
    
    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout<<"["<<MAT[o][i]<<"]";
        }
        cout<<endl;
    }
    return 0;
}