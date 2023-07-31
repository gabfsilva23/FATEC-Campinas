package pkg2021.exemploaula04;

public class TV {
    
    // atributos
    private String marca;
    private boolean ligada;
    private int volume;
    private int canal;
    
    
    // métodos
    public TV(String marca) {
        this.marca = marca;
        this.ligada = true;
        this.volume = 9;
        this.canal = 2;
    }

    public TV(String marca, boolean ligada, int volume, int canal) {
        this.setMarca(marca);
        this.ligada = ligada;
        this.setVolume(volume);
        this.setCanal(canal);
    }
    
    public void ligarTV() {
        this.ligada = true;
    }
    
    public void desligarTV() {
        this.ligada = false;
    }
    
    public void aumentarVolume() {
        this.volume++;
    }
    
    public void diminuirVolume() {
        this.volume--;
    }
    
    
    
    

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public int getVolume() {
        return volume;
    }

    public void setVolume(int volume) {
        if (volume > 0) {
            this.volume = volume;
        } else {
            this.volume = 9;
            System.out.println("Volume inválido!");
        }
    }

    public int getCanal() {
        return canal;
    }

    public void setCanal(int canal) {
        this.canal = canal;
    }
    
    
    
    
    
    
    
    public void trocarCanal(int canal) {
        if (canal < 500) {
            this.canal = canal;
        } else {
            System.out.println("Canal inválido!");
        }        
    }
    
    public void mostrarTV() {
        System.out.println(this.marca +
                "\nVolume: " + this.volume + 
                "\nCanal: " + this.canal + 
                (this.ligada ? "\nTV Ligada" : "\nTV Desligada"));
    }
}
