/*15. Realice un programa que solicite al usuario que piense un numero entero entre el 1 y el
100. el programa debe generar un numero aleatorio en ese mismo rango [1-100], e indicar al 
usuario si el numero de digitos es menor o mayor al numero aleatorio, asi hasta que lo adivine
y por ultimo mostrar el numero de intentos que le llevo.

variable = limite_inferior + rang()%(limite_superior + 1 - limite_inferior);
*/

#include<iostream>
#include<time.h>

using namespace std;

int main()
{
    int NUM, VAR, i = 0;

    cout<<"Digite un valor: ";cin>>NUM;

    srand(time(NULL)); //Crea un numero aleatorio
    VAR = 1 + rand()%(101-1);
    do
    {
        i++;
        cout<<"\n";
        if(NUM > VAR)
        {
            cout<<NUM<<" es mayor al generado"<<endl;
            cout<<"Digite otro valor: ";cin>>NUM;
        }

        if(NUM < VAR)
        {
            cout<<NUM<<" es menor al generado"<<endl;
            cout<<"Digite otro valor: ";cin>>NUM;
        }
    } while (NUM != VAR);
     
    cout<<"El numero ingresado es igual al aleatorio"<<endl;
    cout<<"El numero de intentos fue "<<i<<endl;
    return 0;
}