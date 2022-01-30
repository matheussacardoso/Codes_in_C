package guanabara.aula05;
public class ContaBanco {
    public int numconta;
    protected String tipo;
    private String dono;
    private float saldo;
    private boolean status;
    
    public void estadoAtual(){
        System.out.println("Conta: " +this.getNumconta());
        System.out.println("Tipo: " +this.tipo);
        System.out.println("Dono: " +this.getDono());
        System.out.println("Saldo: " +this.getSaldo());
        System.out.println("Staus: "+this.getStatus());
    }
    // alt + insert
    public ContaBanco(){ // construtor com o saldo zero e status fechada
        this.status=false;
        // setStatus(false);
        this.saldo=0;
        // setSaldo(0);
    }
    
    /*
    public void fechada(){
        this.status=false;
    }
    public void aberta(){
        this.status=true;
    }
    */
    
    public void abrirConta(String t){
        // this serve para modificar o atributo
        this.setTipo(t);
        this.setStatus(true);
        if("CC".equals(t)){
            //this.saldo=saldo+50;
            this.setSaldo(50);
        }
        // if ("CP"==(t)){
        if ("CP".equals(t)){
            //this.saldo=saldo+150;
            this.setSaldo(150);
        }
        System.out.println("Conta aberta com sucesso!");
    }
    
    public void fecharConta(){
        if (this.getSaldo()>0){
            System.out.println("Conta com dinheiro");
        }
        else if(this.getSaldo()<0){
            System.out.println("Conta em débito");
        }
        else{
            this.setStatus(false);
            System.out.println("Conta Fechada");
        }
    }    
    public void depositar(float v){
        if(this.getStatus()){
            // this.saldo=this.saldo+v;
            this.setSaldo(this.getSaldo()+v);
        }   
        else{
            System.out.println("Impossível depositar");
        }
    }
    public void sacar(float v){
        if(this.getStatus()){
            if (this.getSaldo()>= v){
                this.setSaldo(this.getSaldo()-v);
            }
            else{
                System.out.println("Impossível sacar");
            }
        }
    }
    // status verdadeiro e sacar no máx a quantidade que possui
    public void pagarMensal(){
        int v=0;
        if("CC".equals(this.getTipo())){
            v=12;
        }
        else if ("CP".equals(this.getTipo())){
            v=20;
        }
        if (this.getStatus()){
            if(this.getSaldo()>v){
                this.setSaldo(this.getSaldo()-v);
            }
            else{
                System.out.println("Saldo insuficiente");
            }
        }
        else{
            System.out.println("Impossível pagar");
        }
        
        
    }
    // get e set para cada atributo
    public int getNumconta(){
        return numconta;
    }
    public void setNumconta(int numconta) {
        this.numconta = numconta;
    }

    public String getTipo() {
        return tipo;
    }
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
    
    public String getDono() {
        return dono;
    }
    public void setDono(String dono) {
        this.dono = dono;
    }
    
    public float getSaldo() {
        return saldo;
    }
    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public boolean getStatus() {
        return status;
    }
    public void setStatus(boolean status) {
        this.status = status;
    }
}
