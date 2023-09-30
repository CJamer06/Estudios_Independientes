/* Paso de paramatros de tipo vecto

Parametros de la función:
    void <Nombre_Funcion>(<tipo> <Nom_Arreglo>[], int <tamaño_Arreglo>);

Llamar a la función:
    <Nombre_Funcion>(<Nom_Arreglo>,<tamaño_Arreglo>);
*/

//Cuadrado de los elementos del vector

#include<iostream>

using namespace std;

void Cuadrado(int Arreglo1[], int);

int main()
{
    int N; 
    cout<<"Numero de elementos: ";cin>>N;

    int Arreglo1[N];
    for (int i = 0; i < N; i++)
    {
        cout<<"Valor #"<<i+1<<": ";cin>>Arreglo1[i];
    }
    
    Cuadrado(Arreglo1,N);

    system("pause");
    return 0;
}

void Cuadrado(int Arreglo1[], int N) //Las funciones solo deben realizar 1 proceso 

{
    for (int i = 0; i < N; i++)
    {
        cout<<"El cuadrado del valor #"<<i+1<<" es: "<<Arreglo1[i]*Arreglo1[i]<<endl;
    }
    
}