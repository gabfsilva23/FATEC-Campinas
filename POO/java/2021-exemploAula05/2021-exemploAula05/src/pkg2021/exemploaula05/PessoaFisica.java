package pkg2021.exemploaula05;

public class PessoaFisica extends Pessoa {

    private String rg;

    public PessoaFisica(String nome) {
        super(nome);
    }

    public PessoaFisica(String rg, String nome) {
        super(nome);
        this.rg = rg;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public void mostrar() {
        System.out.println("Nome: " + this.getNome() + 
                "\tRG: " + this.getRg());
    }
  
}
