package Bloque1;

import java.util.Scanner;

public class Ejercicio8 {
    public static void main(String[] args){
        Scanner Coe = new Scanner(System.in);

        System.out.print("Digite el valor de a: ");
        double a = Coe.nextInt();

        System.out.print("Digite el valor de b: ");
        double b = Coe.nextInt();

        System.out.print("Digite el valor de c: ");
        int c = Coe.nextInt();

        double x1 = 0, x2 = 0, Aux = 0;
        Aux = (double) (Math.pow(b,2)-(4*a*c));

        x1 = ((-1 * b) + Math.sqrt(Aux))/2*a;
        x2 = ((-1 * b) - Math.sqrt(Aux))/2*a;;

        System.out.println("El resultado es x1 = "+x1+" y x2 = "+x2);
    }
}
