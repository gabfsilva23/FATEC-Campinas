package pkg2021.exercicio1aula04;

public class Exercicio1Aula04 {

    public static void main(String[] args) {
        Quadrado q1 = new Quadrado(5.7, 4);
        System.out.println("Area do quadrado = " + 
                q1.calcularArea());
        
        Triangulo t1 = new Triangulo(10, 3.8, 3);
        System.out.println("Are do triangulo = " + 
                t1.calcularArea());
        
        TrianguloRetangulo tr1 = new TrianguloRetangulo(12, 5, 3);
        tr1.setCatetos(5, 12);
        System.out.println("Hipotenusa = " + 
                tr1.calcularHipotenusa());
        
    }
    
}
