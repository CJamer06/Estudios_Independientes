/*2. Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle el IVA*/

#include <iostream>

using namespace std;

int main()
{
	float PP = 0, IVA = 0;
	
	cout<<"Digite el precio del producto: "; 
	cin>>PP;
	
	IVA = PP * 0.16;

	cout<<"El precio del producto + IVA: "<<PP + IVA<<endl; 

	return 0;
}
