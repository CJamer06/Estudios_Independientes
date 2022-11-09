//Tipo de datos basicos en C++
#include<iostream>
using namespace std;
int main()
{
    int EDAD=0; //Tipo de dato Numero entero (1,2,3,4,5...);
    float PESO=0; //Tipo de dato Numero flotante o decimal (1.5, 2.3, 6.8)
    // double ID = 0; //Tipo de dato Numero extremadamente largo (1007964451)
    char NOMBRE[30]; //Tipo de dato cadena de texto

    // cout<<""; // Se usa para mostrar la información en consola
    // cin>>_Variable_; // Se guardar la información en las variables

    cout<<"Hola mundo "<<endl;
    cout<<"Ingresa tu nombre: ";
    cin>>NOMBRE;
    cout<<"Ingresa tu edad: ";
    cin>>EDAD;
    cout<<"Ingrese su peso [Kg]: ";
    cin>>PESO;

    cout<<"Hola "<<NOMBRE<<" para tener "<<EDAD<<" Te ves muy joven y no parece que pesaras "<<PESO<<"Kg";
    return 0;
}

