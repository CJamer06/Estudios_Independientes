/*3. Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una 
potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá ser 
el segundo valor transmitido a la función.
*/

#include<iostream>

using namespace std;

void PD();
void funpot(int x,int y);

int NUM, EXP;

int main()
{
    PD();
    funpot(NUM,EXP);
    system("pause");
    return 0;
}

void PD()
{
    cout<<"Digite un numero: ",cin>>NUM;
    cout<<"Digite el exponente: ";cin>>EXP;
}

void funpot(int x, int y)
{
    int POW = 1;
    for (int i = 0; i < y; i++)
    {
       POW *= x;
    }
    
    cout<<x<<"^"<<y<<" = "<<POW<<endl;
}