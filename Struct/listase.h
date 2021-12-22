// int *x guarda o end de mem para aquele tipo de variavel
// tp_listase *lista ponteiro q aponta somente para uma struct
// int *x nn � int

//lista � apenas um *, ou seja, os elementos nn s�o contidos dentro da lista
#ifndef LISTASE_H
#define LISTASE_H

#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct tp_no{
	tp_item info;
	struct tp_no *prox;
}tp_listase;

tp_listase * inicializa_listase(){
	return NULL;
}

int listase_vazia(tp_listase *lista){
	if(lista==NULL) return 1;
	return 0;
}

tp_listase * aloca_listase(){
	// � retornado o end de mem do novo_no
	tp_listase *novo_no;
	novo_no=(tp_listase*) malloc (sizeof(tp_listase));
	return novo_no;
}

int insere_listase_no_fim(tp_listase **l,tp_item e){
	/*
	**l, pois o ponteiro de um ponteiro � capaz de apontar para o end
	de mem de um ponteiro

	*novo_no s� serve para guardar o end de mem�ria do novo n�, ou seja, apontar
	para o end de mem do novo n�
	*/
	// *atu serve para navegar entre os n�s
	tp_listase *novo_no, *atu;
	novo_no=aloca_listase(); //aqui est� pegando o novo n�
	if (novo_no==NULL) return 0;
	//atribui os valores para o novo n�
	novo_no->info=e;
	novo_no->prox=NULL;
	// finaliza o encadeamento do n�
	/*
	se eu crio uma c�pia da lista, preciso liga-la na lista original
	por isso � utilizado * para apontar para o conteudo de l
	*/
	if(listase_vazia(*l)){
		*l=novo_no;
	}
	else{
		atu=*l; // atu sempre guarda o primeiro n� da lista
		while(atu->prox!=NULL){
			atu=atu->prox; //aponta para o �ltimo n�
		}
		// atribui o end de mem novo_no ao ponteiro prox
		atu->prox=novo_no;
	}
	return 1;
}

void imprime_listase(tp_listase *lista){
	tp_listase *atu; // *atu aponta para o end de mem de uma struct
	atu=lista; // atu sempre guarda o primeiro n� da lista
	while (atu!=NULL){
		printf("%d\n", atu->info);
		atu=atu->prox;
	}
}

int tamanho_listase(tp_listase *lista){
	int cont=0;
	tp_listase *atu;
	atu=lista;
	while(atu!=NULL){
		cont++;
		atu=atu->prox;
	}
	return cont;
}

tp_listase *busca_listase(tp_listase *lista,tp_item e){
	tp_listase *atu;
	atu=lista;
	while ((atu!=NULL)&&(atu->info!=e)){
		atu=atu->prox;
	}
	if(atu==NULL) return NULL;
	return atu;
}

int remove_listase(tp_listase **lista, tp_item e){
	tp_listase *ant,*atu; //ponteiro ant para o elemento anterior
	atu=*lista; //aponta para o primeiro n�
	ant=NULL; //sempre come�a apontando pra nulo, pois ele � anterior a atu
	while ((atu!=NULL)&&(atu->info!=e)){
		ant=atu;
		atu=atu->prox;
	}
	if(atu==NULL) return 0;
	if(ant==NULL){
		*lista=atu->prox;
	}
	else{
		ant->prox=atu->prox;
	}
	free(atu);
	atu=NULL;
	return 1;
}
#endif
