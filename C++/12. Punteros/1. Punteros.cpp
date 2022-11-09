/*Punteros

Para usar una dirección almacenada, C++ proporciona un operador de indirección, *. El símbolo *, 
cuando es seguido por un apuntador (con un espacio permitido tanto antes como después de *), 
significa la variable cuya dirección está almacenada en. Por tanto, si dirNum es un apuntador 
(recuérdese que un apuntador es una variable que almacena una dirección), *dirNum significa la 
variable cuya dirección está almacenada en dirNum. Del mismo modo, *apunta_tab significa la variable 
cuya dirección está almacenada en apunta_tab y *apunta_car significa la variable cuya dirección está 
almacenada en apunta_car.

&n =  Direccion de n
*n = La variable cuya direccion esta almacenada en n.
*/

#include<iostream>

using namespace std;

int main()
{
    int num;
    int *dir_num; // Variable tipo Puntero.

    num = 20;

    //Le colocamos o damos al puntero la direccion exacta de la vaiable.
    dir_num = &num;

    /* Forma convencional.
    cout<<"Numero: "<<num<<endl; //Solo el numero.
    cout<<"Direccion de memoria: "<<&num<<endl; //Solo la direccion de variable.
    */
    
    cout<<"Numero: "<<*dir_num<<endl; //Solo el lo que esta en memoria.
    cout<<"Direccion de memoria: "<<dir_num<<endl; //Solo la direccion de variable.

    return 0;
}