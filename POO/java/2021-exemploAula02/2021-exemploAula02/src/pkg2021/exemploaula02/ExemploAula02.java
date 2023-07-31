package pkg2021.exemploaula02;

import java.util.InputMismatchException;
import java.util.Scanner;
import javax.swing.JOptionPane;

public class ExemploAula02 {

    public static void main(String[] args) {
        float largura=0, comprimento=0, area, perimetro;
        String aux;
        
        /*
        // Exemplo de entrada/saída com Scanner
        Scanner sc = new Scanner(System.in);
        
        try {
            System.out.println("Digite o comprimento");
            comprimento = sc.nextFloat();

            System.out.println("Digite a largura");
            largura = sc.nextFloat();
            
            area = comprimento * largura;
            perimetro = comprimento * 2 + largura * 2;

            System.out.println("Área: " + area);
            System.out.println("Perimetro: " + perimetro);
            
        } catch (InputMismatchException e) {
            System.out.println("Problemas na entrada dos dados!");
        }
        */
        
        // Exemplo de entrada/saída com JOptionPane
        try {
            aux = JOptionPane.showInputDialog("Digite o comprimento");
            comprimento = Float.parseFloat(aux);

            aux = JOptionPane.showInputDialog("Digite a largura");
            largura = Float.parseFloat(aux);

            area = comprimento * largura;
            perimetro = comprimento * 2 + largura * 2;

            JOptionPane.showMessageDialog(null, "Área: " + area +
                    "\nPerimetro: " + perimetro);
        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(null, "Houve um erro!");
        }
    }
}