/*4. Crear un programa que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle al usuario su 
nombre, por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje completo:
"Hola que tal (Nombredelusuario)"*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char CAD[] = "Hola que tal ", NOM[30];

    cout<<"Ingrese su nombre: ";cin.getline(NOM, 30, '\n');

    strcat(CAD,NOM);
    
    cout<<CAD<<endl;
    return 0;
}