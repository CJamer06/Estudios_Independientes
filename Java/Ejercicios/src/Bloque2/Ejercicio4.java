package Bloque2;

import javax.swing.*;

public class Ejercicio4 {
    public static void main(String[] args) {
        double Compra = Double.parseDouble(JOptionPane.showInputDialog("Digite el valor de la compra: "));
        if(Compra > 300){
            Compra -= (Compra*0.20);
        }

        JOptionPane.showMessageDialog(null, "Total a pagar es $"+Compra);
    }
}
