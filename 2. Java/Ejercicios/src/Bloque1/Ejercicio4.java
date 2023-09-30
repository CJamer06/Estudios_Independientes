package Bloque1;

import java.util.Scanner;

public class Ejercicio4 {
    public static void main(String[] args){
        Scanner Dato = new Scanner(System.in);

        int NAV = 0; /*Numero de autos vendidos*/
        System.out.print("Digite el numero de autos vendidos: ");
        NAV = Dato.nextInt();

        float SM = 1000; /*Salario Mensual*/
        int i = 0;
        do{
            float Aux;
            System.out.print("Valor del Auto #"+(++i)+" vendido(s): $");
            Aux = Dato.nextFloat();
            SM += Aux*0.05;
            SM += 150;
        }while(NAV != i);

        System.out.println("El Salario mensual es de: $"+SM);
    }
}
