/*5. Pedir al ususario N numero, al almacenar en un arreglo dinamico , posterior mente ordenar los 
numeros en orden ascendente y mostrarlos en pantalla. 
*/

#include<iostream>

using namespace std;

void PD(int *, int *);
void ORD(int *, int);
void MOSTRAR(int *, int);

int main()
{
    int N, Vec[N];

    PD(Vec, &N); //&N Envio la direccion de memoria de N.
    ORD(Vec, N);
    MOSTRAR(Vec, N);

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

void ORD(int *dirVec, int N)
{
    int Aux;
    for (int i = 0; i < N; i++)
    {
        for (int o = 0; o < N; o++)
        {
            if (*(dirVec+o) > *(dirVec+(o+1)))
            {
                Aux = *(dirVec+o);
                *(dirVec+o) = *(dirVec+(o+1));
                *(dirVec+(o+1)) = Aux;
            }
        }
    }    
}

void MOSTRAR(int *dirVec, int N)
{
    cout<<"\nVector ordenado: \n";
    for (int i = 1; i <= N; i++)
    {
        cout<<"Valor ["<<i-1<<"]: "<<*(dirVec+i);
        cout<<endl;
    } 
}