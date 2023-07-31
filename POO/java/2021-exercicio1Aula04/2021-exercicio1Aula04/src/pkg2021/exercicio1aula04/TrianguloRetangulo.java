package pkg2021.exercicio1aula04;

public class TrianguloRetangulo extends Triangulo implements Retangulo {
    
    private double catetoAdj;
    private double catetoOpo;

    public TrianguloRetangulo(double base, double altura, 
            int numeroLados) {
        super(base, altura, numeroLados);
    }

    @Override
    public void setCatetos(double catetoAdj, double catetoOpo) {
        this.catetoAdj = catetoAdj;
        this.catetoOpo = catetoOpo;
    }

    @Override
    public double calcularHipotenusa() {
        return Math.hypot(this.catetoAdj, this.catetoOpo);
    }
    
}
