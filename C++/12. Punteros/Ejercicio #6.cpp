/*6: Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en 
otra función buscar un número en particular. 
NOTA: Puedes utilizar cualquier método de búsqueda(Secuencial o Binaria)
*/

#include<iostream>

using namespace std;

void PD(int *, int *);
void BUSCAR(int *, int);

int main()
{
    int N, Vec[N];

    PD(Vec, &N); //&N Envio la direccion de memoria de N.
    BUSCAR(Vec, N);

    system("pause");
    return 0;
}

void PD(int *dirVec, int *dirN)
{
    cout<<"Ingrese el numero de elementos: ";cin>>*dirN;
    for (int i = 0; i < *dirN; i++)
    {
        cout<<"Valor ["<<i<<"]: ";cin>>*(dirVec+i);
    } 
}

void BUSCAR(int *dirVec, int N)
{
    int Aux, i = 0;
    int band = 'f';

    cout<<"Valor a buscar: ";cin>>Aux;
    
    while ((band == 'f') && (i<5))
    {
        if(*(dirVec+i) == Aux)
        {
            band = 'v';
        }
        i++;
    }

    if (band == 'f')
    {
        cout<<"El numero "<<Aux<<" no existe en el arregro"<<endl;
    }
    else if(band == 'v')
    {
        cout<<"El numero "<<Aux<<" existe en el arregro en la posicion "<<i-1<<endl;
    }
}
