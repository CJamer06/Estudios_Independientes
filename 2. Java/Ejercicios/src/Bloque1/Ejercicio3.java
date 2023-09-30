package Bloque1;

import java.util.Scanner;

public class Ejercicio3 {
    public static void main(String[] args) {
        Scanner G = new Scanner(System.in);
        float n = 0;

        System.out.print("Digite la cantidad de dolares que tiene Gillermo: $");
        n = G.nextInt();

        float j = n/2;
        float l = (n + j)/2;
        float t = n + j + l;
        
        System.out.println("\nEl total de dinero que poseen los tres es de: $"+t);

    }
}
