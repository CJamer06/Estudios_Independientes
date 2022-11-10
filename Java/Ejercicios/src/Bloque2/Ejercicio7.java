package Bloque2;

import javax.swing.*;

public class Ejercicio7 {
    public static void main(String[] args) {
        double a = Double.parseDouble(JOptionPane.showInputDialog("Digite el 1er valor: "));
        double b = Double.parseDouble(JOptionPane.showInputDialog("Digite el 2do valor: "));
        double c = Double.parseDouble(JOptionPane.showInputDialog("Digite el 3er valor: "));

        if(a>b && b>c){
            JOptionPane.showMessageDialog(null, "El orden es: "+a+", "+b+" y "+c);
        } else if(a>c && c>b){
            JOptionPane.showMessageDialog(null, "El orden es: "+a+", "+c+" y "+b);
        } else if(b>a && a>c){
            JOptionPane.showMessageDialog(null, "El orden es: "+b+", "+a+" y "+c);
        } else if(b>a && a>c){
            JOptionPane.showMessageDialog(null, "El orden es: "+b+", "+a+" y "+c);
        }
    }
}
