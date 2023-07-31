package pkg2021.exemploaula04;

public class ExemploAula04 {

    public static void main(String[] args) {
        TV tv1 = new TV("Sony", false, 200, 2);
        TV tv2 = new TV("LG");
        
        if(tv1.getVolume() > 100) {
            System.out.println("Som muito alto!");
            tv1.setVolume(50);
        }
        tv1.mostrarTV();
        
        tv1.aumentarVolume();
        tv1.aumentarVolume();
        tv1.trocarCanal(5);
        tv1.mostrarTV();
        
        tv2.mostrarTV();
    }
}
