/*
1) Construa uma função que receba uma fila como parâmetro e retorne a fila com os valores
em ordem inversa.
*/

int fila_inversa(tp_fila f){
	tp_item e;
	int string[4];
	int i=0;
	while (!fila_vazia(&f)){
		remove_fila(&f,&e);
		string[i] = e;
		printf("Valor: %d\n",string[i]);
		printf("Posicao: %d\n",i++);
	}
	while(i--){
		printf("\n%d",string[i]);
	}
}
