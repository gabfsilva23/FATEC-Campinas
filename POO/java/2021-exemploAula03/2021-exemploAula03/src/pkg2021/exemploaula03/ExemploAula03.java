package pkg2021.exemploaula03;

public class ExemploAula03 {

    public static void main(String[] args) {
        TV tv1 = new TV();
        TV tv2 = new TV();
        
        System.out.println("\ntv1:");
        tv1.mostrarTV();
        tv1.aumentarVolume();
        tv1.aumentarVolume();
        tv1.trocarCanal(5);
        tv1.mostrarTV();
        
        System.out.println("\ntv2:");
        tv2.mostrarTV();
    }
    
}
