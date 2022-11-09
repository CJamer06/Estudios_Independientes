package Bloque1;

import java.util.Scanner;

public class Ejercicio1 {
    public static void main(String[] args) {
        float[] n = new float[3];
        float Sum = 0;
        System.out.println("Digite las notas del estudiante: ");
        Scanner entrada = new Scanner(System.in);
        for (int i = 0; i<3;i++){
            System.out.print("nota #"+(i+1)+": ");
            n[i] = entrada.nextFloat();
            Sum += n[i];
        }

        System.out.println("El resultado de la suma de las notas es: "+Sum/3);
    }
}