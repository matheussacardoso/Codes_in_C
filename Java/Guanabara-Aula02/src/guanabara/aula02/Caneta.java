package guanabara.aula02;
public class Caneta {
    public String modelo;
    public String cor;
    private float ponta;
    protected int carga;
    // privado só quem mexe é a própria classe
    /* dentro de uma método público é possível mexer 
    em um atributo privado */
    private boolean tampada;
    
    public void status(){
        System.out.println("Modelo: " + this.modelo);
        System.out.println("Uma caneta " + this.cor);
        System.out.println("Ponta: " + this.ponta);
        System.out.println("Carga: " + this.carga);
        System.out.println("Está tampada? " + this.tampada);
    }
    public void rabiscar(){
        if (this.tampada == true){
            System.out.println("Erro! Não posso rabiscar");
        }else{
            System.out.println("Estou rabiscando");
        }
    }
    
    // antes era protected, agora é public
    // agora tenho acesso ao atributo tampada 
    public void tampar(){
        this.tampada=true;
    }
    
    // antes era protected, agora é public
    // agora tenho acesso ao atributo tampada
    public void destampar() {
        this.tampada=false;
    }
}
