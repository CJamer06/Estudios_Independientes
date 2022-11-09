package Bloque2;

import javax.swing.*;

public class Ejercicio2 {
    public static void main(String[] args) {
        int N1 = Integer.parseInt(JOptionPane.showInputDialog("Digite el 1er numero: "));
        int N2 = Integer.parseInt(JOptionPane.showInputDialog("Digite el 2do numero: "));

        if(N1 == N2){
            JOptionPane.showMessageDialog(null,"Los numeros son iguales");
        } else if (N1 < N2){
            JOptionPane.showMessageDialog(null,"El 2do numero es mayor");
        } else {
            JOptionPane.showMessageDialog(null,"El 1ro numero es mayor");
        }
    }
}
