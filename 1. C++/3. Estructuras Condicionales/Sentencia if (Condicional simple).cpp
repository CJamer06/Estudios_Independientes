/* La sentencia if (Condicionales simples)

if(condicion){
    Instruccion 1;
}
else{
    Instruccion 2;
}
*/

#include <iostream>

using namespace std;

int main()
{
    int numero, dato = 5;

    cout<<"Digite un numero: ";cin>>numero;

    if(numero == dato)// igual(==), diferente(!=), mayor que(>), menor que(<), mayor o igual a(>=), menor o igual a(>=)
    {
        cout<<"El numero es 5"<<endl;
    }
    else{
        cout<<"El numero es diferente de 5"<<endl;
    }

    return 0;
}