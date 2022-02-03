package guanabaraaula09;
public class GuanabaraAula09 {
    public static void main(String[] args) {
      
        Pessoa p1= new Pessoa();
        Aluno p2= new Aluno();
        Professor p3= new Professor();
        Funcionario p4= new Funcionario();
        
        p1.setNome("Pedro");
        p2.setNome("Maria");
        p3.setNome("Claúdio");
        p4.setNome("Fabiana");
        
        p1.setSexo("M");
        p3.setIdade(18);
        
        p2.setCurso("Informática");
        p3.setSalario(1200);
        p4.setSetor("Estoque");
        
        System.out.println(p1.toString());
        System.out.println(p2.toString());
        System.out.println(p3.toString());
        System.out.println(p4.toString());
    }
}
