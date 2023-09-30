/*3. Realice un programa que lea de la entrada estandar los siguientes datos de una persona:

	Edad: dato tipo entero.
	Sexo: dato de tipo caracter.
	Altura en metros: Datos de tipo real.

Mostrarlos datos en la salida estandar.
*/

#include<iostream>

using namespace std;

int main()
{
	int Edad = 0;
	char Sexo[20];
	float Altura = 0;
	
	cout<<"Ingrese su edad: "; cin>>Edad;
	cout<<"Sexo [Masculino - Femenino]: ";cin>>Sexo;
	cout<<"Ingrese su altura en metros: ";cin>>Altura;
	
	cout<<"\nSus datos son es: \n";
	cout<<"Edad: "<<Edad<<"\nSexo: "<<Sexo<<"\nAltura: "<<Altura<<endl;
	 
	 return 0;
}
