package pkg2021.exercicio2aula04;

import javax.swing.JOptionPane;

public class LinguagemProgramacaoI extends Disciplina implements Pratica {
    
    private String laboratorio;

    public LinguagemProgramacaoI() {
    }

    public void setLaboratorio(String laboratorio) {
        this.laboratorio = laboratorio;
    }
    
    @Override
    public String obterLaboratorio() {
        return this.laboratorio;
    }
    
    @Override
    public float calulaMedia() {
        String entrada;
        float nota1, nota2, media;
        
        entrada = JOptionPane.showInputDialog("Digite nota 1");
        nota1 = Float.parseFloat(entrada);
        
        entrada = JOptionPane.showInputDialog("Digite nota 2");
        nota2 = Float.parseFloat(entrada);
        
        media = (nota1 + nota2) / 2;
        
        return media;
    }
    
}
