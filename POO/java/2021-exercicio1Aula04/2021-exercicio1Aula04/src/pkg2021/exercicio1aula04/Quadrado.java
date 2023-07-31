package pkg2021.exercicio1aula04;

public class Quadrado extends Poligono {
    private double tamanhoLado;
    
    public Quadrado(double tamanhoLado, int numeroLados) {
        super(numeroLados);
        this.tamanhoLado = tamanhoLado;
    }

    @Override
    public double calcularArea() {
        return this.tamanhoLado * this.tamanhoLado;
    }
}
