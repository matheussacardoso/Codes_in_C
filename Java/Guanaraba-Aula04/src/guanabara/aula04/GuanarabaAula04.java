package guanabara.aula04;

public class GuanarabaAula04 {
    public static void main(String[] args) {
       /* o método get e set são importantes para adicionar mais uma
       camada de segurança para o código para além dos métodos comuns
       de visibilidade*/
       /*vc não tem mais acesso ao atributo diretamente*/
       
       Caneta c1=new Caneta("Fabel","Vermelho",0.4f);
       /*
       c1.setModelo("Bic");
       c1.setPonta(0.5f);
       // c1.ponta=0.5f;
       
       // c1.status();
        System.out.println("Tenho uma caneta: "+c1.getModelo()+" de ponta "+c1.getPonta());
        */
       c1.status();
    }
   
}
