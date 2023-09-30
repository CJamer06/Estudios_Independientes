/*Recursividad: 

Un algoritmo recursivo es un algoritmo que expresa la solución de un problema en términos de una 
llamada a sí mismo. La llamada a sí mismo se conoce como llamada recursiva o recurrente.
En este caso resolveremos un ejemplo para calcular el factorial de un número utilizando recursividad.
*/

/*Realizar el factoril de un numero 3! = 3*2*1

    factorial(n) = 1                 , si n=0
                    n*factorial(n-1) , si n>0
*/


#include<iostream>

using namespace std;

//Prototipos de funciones;
void PD();
int Factorial(int, int);
void Mostrar();

int Num;

int main()
{
    int mult = 1;
    PD();
    cout<<Num<<"! = ";
    Mostrar();
    cout<<" = "<<Factorial(Num, mult)<<endl;
    system("pause");
    return 0;
}

//Declaracion de funciones
void PD()
{
    cout<<"Digite un numero: ";cin>>Num;
}
void Mostrar()
{
   for (int i = Num; i >= 1; i--)
   {
       cout<<i;
       if (i > 1)
       {
           cout<<"*";
       }   
   }
}
int Factorial(int Num, int mult)
{
    if (Num > 1)
    {
        mult *= Num;
        Num--;
        return Factorial(Num, mult);
    }
    else if (Num == 0 || Num == 1)
    {
        mult *= Num;
        return mult;
    }
}