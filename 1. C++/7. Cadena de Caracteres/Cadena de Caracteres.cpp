/*Cadena de Caracteres

    - cin: Guarda hasta que se ingrese un espacio.
        cin>>NOMBRE_VARIABLE;

    - gets: almacena sin importar el espacio delimitado 
        gets(NOMBRE_VARIABLEA);

    - cin.getlie(): Es la mejor opcion para almacenar informacion de tipo char, respeta la cantidad de espacios 
                    y finaliza con un salto de linea.
        cin.getline(NOMBRE_VARIABLE, #_ESPACIOS_MEMORIA, '\n');
                                                           ^
                                                           Indica cuando finaliza la cadena
*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char NOM[30];

    cout<<"Digite su nombre, no mayor a 30 espacios: ";
    cin.getline(NOM,30,'\n');

    cout<<NOM<<endl;
    return 0;
}