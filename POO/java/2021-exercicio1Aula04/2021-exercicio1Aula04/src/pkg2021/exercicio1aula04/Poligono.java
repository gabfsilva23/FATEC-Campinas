package pkg2021.exercicio1aula04;

public abstract class Poligono {
    private int numeroLados;
    
    public Poligono(int numeroLados) {
        this.numeroLados = numeroLados;
    }
    
    public abstract double calcularArea();
    
}
