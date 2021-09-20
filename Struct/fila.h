#ifndef FILA_H
#define FILa_H

#include <stdio.h>
#define MAX 100

typedef int tp_item;

typedef struct{
	tp_item item[MAX];
	int ini, fim;
}tp_fila;

void inicializa_fila(tp_fila *f){
	f->ini = f->fim = MAX-1;
}

int fila_vazia (tp_fila *f){
	if (f->ini == f->fim) return 1;
	return 0;
}

int proximo (int pos){
	if (pos == MAX-1) return 0;
	return ++pos;
}

int fila_cheia (tp_fila *f){
	if(proximo (f->fim)==f->ini) return 1;
	return 0;
}

int insere_fila (tp_fila *f, tp_item e){
	if(fila_cheia(f)) return 0;
	f->fim = proximo (f->fim);
	f->item[f->fim]=e;
	return 1;
}

int remove_fila (tp_fila *f, tp_item *e){
	if(fila_vazia(f)) return 0;
	f->ini= proximo(f->ini);
	*e=f->item[f->ini];
	return 1;
}

void imprime_fila (tp_fila f){
	tp_item e;
	while (!fila_vazia(&f)){
		remove_fila (&f,&e);
		
  		printf("\n%d",e);
	}
}

int tamanho_fila(tp_fila f){
	int cont=0;
	tp_item e;
	while(!fila_vazia(&f)){
		remove_fila(&f,&e);
		cont++;
	}
	return cont;
}

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

#endif
