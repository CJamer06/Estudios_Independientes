/*
	1. Escribe la siguiente exprecion como exprecion en C++
*/

#include<iostream>

using namespace std;

int main()
{
	float a, b, res = 0;
	
	cout<<"Digite el valor de la variable 'a': "; cin>>a;
	cout<<"Digite el valor de la variable 'b': "; cin>>b;
	
	res = (a/b)+1;
	
	cout<<"El resultado es: "<<res; 
	return 0;
}