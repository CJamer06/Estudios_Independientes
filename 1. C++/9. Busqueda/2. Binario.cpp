//Busqueda Binaria

//Necesitamos que el arregro este ordenado acendente mente.

#include<iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5}, INF, SUP, DAT, MIT;
    char band = 'f';

    DAT = 2;

    INF = 0;
    SUP = 5; //Numero de elemntos.

    while (INF <= SUP)
    {
        MIT = (INF + SUP)/2;

        if(a[MIT] == DAT)
        {
            band = 'v';
            break;
        }
        if(a[MIT] > DAT)
        {
            SUP = MIT;
            MIT = (INF + SUP)/2;

        }
        if(a[MIT] < DAT)
        {
            INF = MIT;
            MIT = (INF + SUP)/2;
        }
    }
    
    if (band == 'v')
    {
        cout<<"El numero fue encontrado en la pocicion: "<<MIT<<endl;
    }
    else
    {
        cout<<"El numero no fue encontrado."<<endl;
    }
    
    return 0;
}