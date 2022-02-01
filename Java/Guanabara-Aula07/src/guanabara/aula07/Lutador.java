package guanabara.aula07;
public class Lutador {
    private String nome,nacionalidade;
    private int idade;
    private float altura,peso;
    private String categoria;
    private int vitorias,derrotas,empates;
    
    public Lutador(String no, String na, int id, float al, float pe, 
                   int vi, int de, int em){
        this.nome=no;
        this.nacionalidade=na;
        this.idade=id;
        this.altura=al;
        // quando fizer o setPeso, ele atualizará a categoria automati.
        this.setPeso(pe);
        this.vitorias=vi;
        this.derrotas=de;
        this.empates=em;
    }
    
    public void apresentar(){
        System.out.println("-------Apresentação-------");
        System.out.println("Lutador: "+this.getNome());
        System.out.println("Origem: "+this.getNacionalidade());
        System.out.println(this.getIdade()+" anos");
        System.out.println(this.getAltura()+ " m de altura");
        System.out.println("Pesando: "+this.getPeso()+"Kg");
        System.out.println("Categoria: "+this.getCategoria());
        System.out.println("Ganhou: "+this.getVitorias());
        System.out.println("Perdeu: "+this.getDerrotas());
        System.out.println("Empatou: "+this.getEmpates());
    }
    public void status(){
        System.out.println("-------Status-------");
        System.out.println(""+this.getNome());
        System.out.println("Pesando: "+this.getPeso()+"Kg");
        System.out.println("Categoria: "+this.getCategoria());
        System.out.println(this.getVitorias()+" vitórias");
        System.out.println(this.getDerrotas()+" derrotas");
        System.out.println(this.getEmpates()+" empates");
    }
    public void ganharLuta(){
        this.setVitorias(this.getVitorias()+1);
        // this.vitorias=this.vitorias+1;
    }
    public void perderLuta(){
        this.setDerrotas(this.getDerrotas()+1);
    }
    public void empatarLuta(){
        this.setEmpates(this.getEmpates()+1);
    }
    public String getNome() {
        return nome;
    }
    public String getNacionalidade() {
        return nacionalidade;
    }
    public int getIdade() {
        return idade;
    }
    public float getAltura() {
        return altura;
    }
    public float getPeso() {
        return peso;
    }
    public String getCategoria() {
        return categoria;
    }
    public int getVitorias() {
        return vitorias;
    }
    public int getDerrotas() {
        return derrotas;
    }
    public int getEmpates() {
        return empates;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }
    public void setIdade(int idade) {
        this.idade = idade;
    }
    public void setAltura(float altura) {
        this.altura = altura;
    }
    public void setPeso(float peso) {
        this.peso = peso;
        this.setCategoria(); 
    }
    private void setCategoria() {
        if (peso<52.2){
            this.categoria="Inválido";
        }
        else if (peso <=70.3){
            this.categoria="Leve";
        }
        else if(peso<=83.9){
            this.categoria="Médio";
        }
        else if (peso<=120.2){
            this.categoria="Pesado";
        }
        else{
            this.categoria="Inválido";
        }   
    }
    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }
    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }
    public void setEmpates(int empates) {
        this.empates = empates;
    }
}
