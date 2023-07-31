package pkg2021.exemploaula03;

public class TV {
    private boolean ligada;
    private int volume;
    private int canal;
    
    public TV() {
        ligada = true;
        volume = 7;
        canal = 2;
    }
    
    public void ligarTV() {
        ligada = true;
    }
    
    public void desligarTV() {
        ligada = false;
    }
    
    public void aumentarVolume() {
        volume++;
    }
    
    public void diminuirVolume() {
        volume--;
    }
    
    public void trocarCanal(int c) {
        canal = c;
    }
    
    public void mostrarTV() {
        System.out.println("Volume: " + volume + 
                "\nCanal: " + canal);
    }
}
