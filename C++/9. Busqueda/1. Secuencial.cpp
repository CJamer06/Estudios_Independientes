//Busqueda Secuencial

//a[5] = {3,4,2,5,1}; datos = 4

#include <iostream>

using namespace std;

int main()
{
    int a[] = {3,2,5,1,4}, dato, i;
    int band = 'f';

    dato = 4;
    i = 0;
    
    while ((band == 'f') && (i<5))
    {
        if(a[i] == dato)
        {
            band = 'v';
        }
        i++;
    }
    
    if (band == 'f')
    {
        cout<<"El numero "<<dato<<" no existe en el arregro"<<endl;
    }
    else if(band == 'v')
    {
        cout<<"El numero "<<dato<<" existe en el arregro en la posicion "<<i-1<<endl;
    }
    return 0;
}