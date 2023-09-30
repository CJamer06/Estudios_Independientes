/*16. Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de 
los elementos almacenados en dicha fila.*/

#include<iostream>

using namespace std;

void PD();
void AM(int m[][100], int, int, int); //Analizador de matrices

int m[100][100],nfil,ncol,filb, aux;

int main()
{
    PD();
    AM(m,nfil,ncol,filb);

    cout<<"El numero menor de la fila es: "<<aux<<endl;
    system("pause");
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
        }
    }
    cout<<"Digite la fila a analizar [inicia en 0]: ";cin>>filb;
    if (filb > nfil)
    {
        aux = filb - nfil;
        filb -= aux; 
    }  
}

void AM(int m[][100], int nfil, int ncol, int filb)
{
    int men;
    aux = 999999;

    cout<<"\n-- Analizador de filas --"<<endl;
    int i = filb;

    cout<<"Fila a analizar: #"<<i<<endl;
    do
    {
        for (int o = 0; o < ncol; o++)
        {
            cout<<"["<<m[i][o]<<"] ";

            if (aux > m[i][o])
            {
                aux = m[i][o];
            }
        } 
        filb++;
    } while (filb == i);
}