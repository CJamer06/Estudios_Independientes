/*4. Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido 
por el usuario. Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879.
*/

#include<iostream>

using namespace std;

void PD ();
void PF (float NUM);

float NUM;

int main()
{
    PD();
    PF(NUM);
    system("pause");
    return 0;
}

void PD()
{
    cout<<"Ingrese un valor: ";cin>>NUM;
}

void PF(float NUM)
{
    int AUX;
    AUX = NUM;
    cout<<"El valor decimal es: "<<NUM - AUX<<endl;
}