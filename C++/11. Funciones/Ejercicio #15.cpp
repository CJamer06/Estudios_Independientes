/*15. Desarrollar una fucion que determine su una matriz es simetrica o no.

una matriz es simetrica: A = A^t

- la matriz debe ser cuadrada: n * n 
- Aij = Aji

|2  5  9|       |2  5  9|
|5  8 -1|  ->   |5  8 -1|
|9 -1 10|       |9 -1 10|

*/

#include<iostream>

using namespace std;

void PD();
void IM(int m[][100],int, int); //Invertir Matriz

int m[100][100], nfil, ncol;
char band = 'v';

int main()
{
    PD();
    IM(m,nfil,ncol);

    return 0;
}

void PD()
{
    cout<<"Digite el numero de filas: ";cin>>nfil;
    cout<<"Digite el numero de columnas: ";cin>>ncol;

    for (int i = 0; i < nfil; i++)
    {
        for (int o = 0; o < ncol; o++)
        {
            cout<<"["<<i<<"]["<<o<<"]: ";cin>>m[i][o];

            if (nfil != ncol)
            {
                band = 'f';
            }
        }
    }
}

void IM(int m[][100],int nfil, int ncol)
{
    if (band == 'f')
    {
        cout<<"La matriz no es simetrica"<<endl;
    }
    
    cout<<"\n-- Matriz transpuesta --"<<endl;

    for (int i = 0; i < nfil; i++)
    {
        for (int o = 0; o < ncol; o++)
        {
            cout<<"["<<i<<"]["<<o<<"]: "<<m[o][i]<<" ";

            if (m[i][o] != m[o][i])
            {
                band = 'f';
            }
        }
        cout<<endl;
    }

    if (band == 'f')
    {
        cout<<"La matriz no es simetrica"<<endl;
    }
    else
    {
        cout<<"la matriz es simetrica"<<endl;
    }
}