package guanabara.aula10;
public class GuanabaraAula10 {
    public static void main(String[] args) {
        // Pessoa p1= new Pessoa();
        // incorreto, pois Pessoa é um método abstrato
        Visitante v1= new Visitante();
        v1.setNome("Juvenal");
        v1.setIdade(22);
        v1.setSexo("M");
        System.out.println(v1.toString());
        
        Aluno a1= new Aluno();
        a1.setNome("Cláudio");
        a1.setMatricula(1111);
        a1.setCurso("Informática");
        a1.setIdade(26);
        a1.setSexo("M");
        a1.pagarMensalidade();
        
        
    }
    
}
