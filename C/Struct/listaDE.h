// novo->info=e (o ponteiro aponta para o end de mem info
// e armazena seu conteudo em info)

#ifndef LISTADE_H
#define LISTADE_H

#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

//dados estruturado que representa o descritor
typedef struct tp_no_aux {
	struct tp_no_aux *ant;
	tp_item info;
	struct tp_no_aux *prox;
}tp_no;

//dado estruturado que representa o nó
typedef struct{
	tp_no *ini;
	tp_no *fim;
	int tamanho;
}tp_listad;

//aloca-se memoria para o descritor (explicando no inicio)
//deste arquivo) e faz o seus ponteriros apontarem para o nulo
tp_listad *inicializa_listad(){
	// o ponteiro guarda o end de mem de uma área que é alocada de forma dinâmica
	tp_listad *lista=(tp_listad*) malloc(sizeof(tp_listad));
	lista->ini=NULL;
	lista->fim=NULL;
	lista->tamanho=0;
	return lista;
}

//aloca um nó da lista
tp_no *aloca(){
	tp_no* pt;
	pt=(tp_no*) malloc(sizeof(tp_no));
	return pt;
}

int listad_vazia(tp_listad *lista){
	if(lista->ini==NULL) return 1;
	return 0;
}

//insere um novo nó na lista
int insere_listad_no_fim (tp_listad *lista, tp_item e) {
	tp_no *novo;
	novo=aloca();
	if(!novo) return 0;
	novo->info=e;
	if ( listad_vazia(lista) ){ //se for o primeiro elemento da lista
		novo->prox=NULL;
		novo->ant=NULL;
		lista->ini=lista->fim=novo;
	}
	else{
		novo->prox=NULL;
		novo->ant=lista->fim;
		lista->fim->prox=novo;
		lista->fim=novo;
	}
	lista->tamanho++;
	return 1;
}

void imprime_listad(tp_listad *lista, int ordem) {
	tp_no *atu;
	
	switch (ordem){
		case 1: atu = lista->ini;
		while (atu!=NULL){
			printf("%d ",atu->info);
			atu=atu->prox;
		}
		break;
		case 2: atu=lista->fim;
		while(atu!=NULL){
			printf("%d",atu->info);
			atu=atu->ant;
		}
		break;
		default: printf("codigo invalido");
	}
}

int remove_listad(tp_listad *lista, tp_item e){
	tp_no *atu = lista->ini;
	while( (atu != NULL) && (atu->info !=e) ){
		atu=atu->prox;
	}
	if (atu==NULL) return 0;
	// quando tem um nó apenas
	if(lista->ini == lista->fim) {
		lista->ini = lista->fim = NULL;
	}
	else{
		// primeiro nó
		if (lista->ini==atu){
			lista->ini=atu->prox;
			atu->prox->ant=NULL;
		}
		else{
			// último nó
			if(lista->fim==atu){
				lista->fim=atu->ant;
				atu->ant->prox=NULL;
			}
			// nó intermediário
			else{
				atu->prox->ant=atu->ant;
				atu->ant->prox=atu->prox;
			}
		}
	}
	free(atu);
	lista->tamanho--;
	return 1;
	}

tp_no *busca_listad (tp_listad *lista,tp_item e){
	tp_no *atu;
	atu=lista->ini;
	while ( (atu!=NULL) && (atu->info !=e) ){
		atu=atu->prox;
	}
	return atu;
}

tp_listad *destroi_listad(tp_listad *lista){
	tp_no *atu;
	atu = lista->ini;
	while (atu != NULL){
		lista->ini=atu->prox;
		free(atu);
		atu=lista->ini;
	}
	free(lista);
	return NULL;
}
#endif
