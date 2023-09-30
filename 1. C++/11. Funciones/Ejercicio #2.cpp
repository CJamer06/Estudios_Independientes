/*2.  Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite 
y despliegue el resultado. La función deberá ser capaz de elevar al cuadrado números flotantes.
*/

#include<iostream>

using namespace std;

//Prototipo de la función
void PD();
void al_cuadrado(float x);

int main()
{
    PD();
    system("pause");
    return 0;
}

void PD()
{
    float NUM;
    cout<<"Digite un valor: ";cin>>NUM;
    al_cuadrado(NUM);
}

void al_cuadrado(float x)
{
    cout<<"El cuadrado del valor es: "<<(x*x)<<endl;
}