/*8. Escriba un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto numero e 
indicar si el numero coincide con alguno de los intoducidos anteriormente*/

#include<iostream>

using namespace std;

int main()
{
    int N1, N2, N3, N4;
    cout<<"Ingrese 3 valores: "<<endl;
    cout<<"Numero 1: ";cin>>N1;
    cout<<"Numero 2: ";cin>>N2;
    cout<<"Numero 3: ";cin>>N3;

    cout<<"\nAhora ingrese un 4 valor para compararlo con los anteriores: ";cin>>N4;

    if (N4 == N1)
    {
        cout<<"El cuarto valor es igual al primero"<<endl;
    }
    else if (N4 == N2)
    {
        cout<<"El cuarto valor es igual al segundo"<<endl;
    }
    else if (N4 == N3)
    {
        cout<<"El cuarto valor es igual al tercero"<<endl;
    }
    else
    {
        cout<<"El cuarto valor es no igual a ninguna"<<endl;
    }
    
    return 0;
}
