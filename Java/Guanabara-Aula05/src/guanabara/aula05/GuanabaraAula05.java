package guanabara.aula05;
public class GuanabaraAula05 {
    public static void main(String[] args) {
        ContaBanco c1 = new ContaBanco();
        c1.setNumconta(1111);
        c1.setDono("Matheus");
        // c1.estadoAtual();
        c1.abrirConta("CC");
        
        ContaBanco c2 = new ContaBanco();
        c2.setNumconta(2222);
        c2.setDono("Bia");
        // c1.estadoAtual();
        c2.abrirConta("CP");
        
        c1.depositar(300);
        c2.depositar(500);
        c1.sacar(100);
        c2.sacar(200);
        c1.sacar(250);
        c1.fecharConta();
        c1.estadoAtual();
        c2.estadoAtual();
    }
    
}
