package pkg2021.exercicio1aula04;

public class Triangulo extends Poligono {
    private double base;
    private double altura;
    
    public Triangulo(double base, double altura, int numeroLados) {
        super(numeroLados);
        this.base = base;
        this.altura = altura;
    }

    @Override
    public double calcularArea() {
        return (this.base * this.altura) / 2;
    }
    
}
