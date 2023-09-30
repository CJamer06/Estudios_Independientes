//6. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro estudiantes

#include<iostream>

using namespace std;

int main()
{
	float ALM1, ALM2, ALM3, ALM4, RES = 0;
	
	cout<<"Digite la nota del alumno #1: ";cin>>ALM1;
	cout<<"Digite la nota del alumno #2: ";cin>>ALM2;
	cout<<"Digite la nota del alumno #3: ";cin>>ALM3;
	cout<<"Digite la nota del alumno #4: ";cin>>ALM4;
	
	RES = (ALM1+ALM2+ALM3+ALM4)/4;
	
	cout<<"El resultado es: "<<RES<<endl;

	return 0;
}