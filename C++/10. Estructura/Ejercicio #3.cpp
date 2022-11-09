/*3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y 
que imprima los datos del empleado con mayor y menor salario.
*/

#include<iostream>

using namespace std;

struct EMP
{
    char NOM[30];
    float SAL;
};

int main()
{
    int N, MAY=0, MIN = 99999, AUX, AUX2;
    cout<<"Numero de empleados: ";cin>>N;
    struct EMP D[N];

    for (int i = 0; i < N; i++)
    {
        cin.ignore();
        cout<<"Datos empleado #"<<i+1<<"\n";
        cout<<"Nombre: ";cin.getline(D[i].NOM,30,'\n');
        cout<<"Salario: ";cin>>D[i].SAL;

        if (D[i].SAL > MAY)
        {   
            MAY = D[i].SAL;
            AUX = i;
        }
        
        if(D[i].SAL < MIN)
        {
            MIN = D[i].SAL;
            AUX2 = i;
        }
        cout<<endl;
    }
    
    cout<<"EL empleado con el salario mas alto es: "<<endl;
    cout<<"Nombre: "<<D[AUX].NOM<<endl;
    cout<<"Salario: "<<D[AUX].SAL<<endl;

    cout<<"\nEL empleado con el salario mas bajo es: "<<endl;
    cout<<"Nombre: "<<D[AUX2].NOM<<endl;
    cout<<"Salario: "<<D[AUX2].SAL<<endl;

    return 0;
}