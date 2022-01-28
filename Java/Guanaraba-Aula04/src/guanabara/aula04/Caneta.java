package guanabara.aula04;
public class Caneta {
    public String modelo;
    private String cor;
    private float ponta;
    private boolean tampada;
    
    public Caneta(String m, String c, float p){ // met. construtor
        this.modelo=m;
        this.cor=c;
        // outra opção
        this.setPonta(p);
        this.tampar();
        // o met. permite o acesso direto ao atributo
        // this.cor="Azul"; 
        
    }
    
    public String getModelo(){
        return this.modelo;
    }
    
    public void setModelo(String m){
        this.modelo=m;
    }
    
    public float getPonta(){
        return this.ponta;
    }
    
    public void setPonta(float p){
        this.ponta=p;
    }
    
    public void tampar(){
        this.tampada=true;
    }
    
    public void destampar(){
        this.tampada=false;
    }
    
    public void status(){
        System.out.println("Sobre a caneta:");
        System.out.println("Modelo: " + this.getModelo());
        //System.out.println("Modelo: " + this.modelo);
        System.out.println("Ponta: " + this.ponta);
        System.out.println("Cor: " +this.cor);
        System.out.println("Tampada: " +this.tampada);
    }
}
