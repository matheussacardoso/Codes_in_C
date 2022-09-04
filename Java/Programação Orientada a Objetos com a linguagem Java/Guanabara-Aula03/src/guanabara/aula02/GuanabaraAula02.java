package guanabara.aula02;
public class GuanabaraAula02 {
    public static void main(String[] args) {
        // no método main só mexe em atributos public ou protected
        Caneta c1 = new Caneta();
        c1.modelo="BIC";
        c1.cor="Azul";
        // c1.ponta=0.5f; privado
        c1.carga=80;
        // antes era c1.tampada=true;
        c1.tampar();
        c1.status();
        c1.rabiscar();
        /*exemplo do supermercado
        cliente dá 50 e o produto é 40
        cliente não pode ir pegar o troco no caixa
        então o atendente pega o troco no caixa(met. privado)
        da aí o atendente dá o troco pro cliente
        - cliente-atendente é um met. público
        - caixa-atendente é um met. privado*/
    }
}
