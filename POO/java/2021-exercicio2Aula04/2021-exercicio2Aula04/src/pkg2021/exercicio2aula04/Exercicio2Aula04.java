package pkg2021.exercicio2aula04;

public class Exercicio2Aula04 {

    public static void main(String[] args) {
        LinguagemProgramacaoI lp1 = new LinguagemProgramacaoI();
        
        lp1.setCodigo(32);
        lp1.setLaboratorio("01 - 1o andar");
        
        System.out.println("Lab: " + 
                lp1.obterLaboratorio());
        System.out.println("Media: " + 
                lp1.calulaMedia());
    }
    
}
