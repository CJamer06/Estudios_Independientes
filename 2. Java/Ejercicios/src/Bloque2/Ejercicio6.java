package Bloque2;

import javax.swing.*;

public class Ejercicio6 {
    public static void main(String[] args) {
        int a = Integer.parseInt(JOptionPane.showInputDialog("Digite un valor para a: "));
        int b = Integer.parseInt(JOptionPane.showInputDialog("Digite un valor para b: "));

        if(a % 2 == 0 && b%2 == 0){
            JOptionPane.showMessageDialog(null, "Ambos numeros son pares");
        } else if(a%2 != 0 && b%2 != 0){
            JOptionPane.showMessageDialog(null, "Ambos numeros son impares");
        } else {
            JOptionPane.showMessageDialog(null, "No son pares ni, impares ambos");
        }
    }
}
