package pkg2021.exemploaula05;

public class ExemploAula05 {

    public static void main(String[] args) {
        /*
        Pessoa
            Pessoa Física
                Aluno
                Visitante
                Convidado
            Pessoa Jurídica
        */
        
        Aluno a1 = new Aluno("Carlos");
        a1.setRg("111111");
        a1.setRa(2021000001);
        a1.mostrar();
        
        Convidado c1 = new Convidado("Maria");
        c1.mostrar();
        
        Visitante v1 = new Visitante("333333", "Daniel");
        v1.mostrar(); 
    }
}
