package guanabara.aula06;
public class ControleRemoto implements Controlador {
    private int volume;
    private boolean ligado;
    private boolean tocando;
    
    // construtor
    public ControleRemoto(){
        this.volume=50;
        this.ligado=false;
        this.tocando=false;
    }

    // getter e setter
    public int getVolume() {
        return volume;
    }
    public boolean getLigado() {
        return ligado;
    }
    public boolean getTocando() {
        return tocando;
    }
    public void setVolume(int volume) {
        this.volume = volume;
    }
    public void setLigado(boolean ligado) {
        this.ligado = ligado;
    }
    public void setTocando(boolean tocando) {
        this.tocando = tocando;
    }
    
    // sobrescrevendo método
    @Override
    public void ligar(){
        this.setLigado(true);
    }
    @Override
    public void desligar(){
        this.setLigado(false);
    }
    @Override
    public void abrirMenu(){
        System.out.println("Está ligado? "+this.getLigado());
        System.out.println("Está tocando? "+this.getTocando());
        System.out.println("Volume: "+this.getVolume());
        for (int i=1;i<=this.getVolume();i+=10){
            System.out.print("|");
        }
    }
    @Override
    public void fecharMenu(){
        System.out.println("Fechando Menu...");
    }
    @Override
    public void maisVolume(){
        if(this.getLigado()) this.setVolume(this.getVolume()+5);
    }
    @Override
    public void menosVolume(){
        if(this.getLigado()) this.setVolume(this.getVolume()-5);
    }
    @Override
    public void ligarMudo(){
        if(this.getLigado() && this.getVolume()>0) this.setVolume(0);
    }
    @Override
    public void desligarMudo(){
        if(this.getLigado() && this.getVolume()==0) this.setVolume(50);
    }
    @Override
    public void play(){
        // !this.getTocando()
        if (this.getLigado() && this.getTocando()==false) this.setTocando(true);
    }
    @Override
    public void pause(){
        if(this.getLigado() && this.getTocando()) this.setTocando(false);
    }
}
