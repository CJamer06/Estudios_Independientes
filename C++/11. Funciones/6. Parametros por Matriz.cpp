//Paso de parametro por matriz

#include<iostream>

using namespace std;

void MosMatr(int m[][3], int, int);
void CC(int m[][3], int, int);
int main()
{
    const int Nfil = 2, Ncol = 3; //const es una variable que no se puede modificar.
    int m[Nfil][Ncol] = {{1,2,3},{4,5,6}};
    MosMatr(m,Nfil,Ncol);
    CC(m,Nfil,Ncol);
    return 0;
}

void MosMatr(int m[][3], int Nfil, int Ncol)
{
    cout<<"Mostrando matariz original: \n";

    for (int i = 0; i < Nfil; i++)
    {
        for (int o = 0; o < Ncol; o++)
        {
            cout<<m[i][o]<<" ";
        }
     cout<<endl;   
    }
}

void CC(int m[][3], int Nfil, int Ncol)
{
    cout<<"Matriz elevanda: \n";

    for (int i = 0; i < Nfil; i++)
    {
        for (int o = 0; o < Ncol; o++)
        {
            cout<<m[i][o] * m[i][o]<<" ";
        }
     cout<<endl;   
    }
}