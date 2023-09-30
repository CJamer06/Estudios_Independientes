/* Sentencia do while
    do
    {
        conjunto de intrucciones;
    } while (expresion logica);
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i = 0;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=10); 
    
    system("pause");
    return 0;
}