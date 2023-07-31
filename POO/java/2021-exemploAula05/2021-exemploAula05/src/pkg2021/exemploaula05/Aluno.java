package pkg2021.exemploaula05;

public class Aluno extends PessoaFisica {
    
    private int ra;

    public Aluno(String nome) {
        super(nome);
    }
    
    public Aluno(int ra, String nome) {
        super(nome);
        this.ra = ra;
    }

    public Aluno(String rg, String nome) {
        super(nome);
        super.setRg(rg);
    }

    public Aluno(int ra, String rg, String nome) {
        super(rg, nome);
        this.ra = ra;
    }

    public int getRa() {
        return ra;
    }

    public void setRa(int ra) {
        this.ra = ra;
    }
    
    @Override
    public void mostrar() {
        System.out.println("Nome: " + this.getNome() + 
                "\tRG: " + this.getRg() + 
                "\tRA: " + this.getRa());
    }
    
    
    
    
}
