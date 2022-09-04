package guanabara.aula07;
public class GuanabaraAula07 {
    public static void main(String[] args) {
        Lutador l[]= new Lutador[2]; 
        l[0]=new Lutador("Pretty Boy","França",31,1.75f,68.9f,11,2,1);
        l[1]=new Lutador("Putscript","Brasil",29,1.68f,57.8f,14,2,3);
        //l[0].apresentar();
        //l[1].apresentar();
        //l[1].status();
        
        Luta UEC1 = new Luta();
        UEC1.marcarLuta(l[0],l[1]);
        UEC1.lutar();
        l[1].status();
        l[0].status();
    }
}
