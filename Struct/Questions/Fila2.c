/*
2) Dada uma fila circular alocada sobre um vetor DADOS[6], faça um algoritmo que leia 10
números inteiros e proceda, para cada um deles, como segue:
	se o número for par, insira-o na fila; se estiver cheia, retire um elemento da fila e
	insira o número lido
	se o número lido for ímpar, retire um número da fila; se estiver vazia, mostre uma
	mensagem
Ao final, imprima os elementos que ficaram na fila.
*/

#include <stdio.h>
#include "fila.h"
int main(){
	tp_fila fila;
	inicializa_fila(&fila);
	int i,num;
	tp_item e;
	for (i=1; i <= 10; i++){
		scanf("%d",&num);
		
		if (num%2 == 0) {
			while( !insere_fila(&fila,num) ){
				remove_fila(&fila,&e);
				insere_fila(&fila,num);
			}
		}
		else {
			if( !remove_fila(&fila,&e) ){
				printf("Fila vazia");
			}
		}
	}
	imprime_fila(fila);
	return 0;
}
