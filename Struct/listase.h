// int *x guarda o end de mem para aquele tipo de variavel
// tp_listase *lista ponteiro q aponta somente para uma struct
// int *x nn é int

//lista é apenas um *, ou seja, os elementos nn são contidos dentro da lista
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
	// é retornado o end de mem do novo_no
	tp_listase *novo_no;
	novo_no=(tp_listase*) malloc (sizeof(tp_listase));
	return novo_no;
}

int insere_listase_no_fim(tp_listase **l,tp_item e){
	/*
	**l, pois o ponteiro de um ponteiro é capaz de apontar para o end
	de mem de um ponteiro

	*novo_no só serve para guardar o end de memória do novo nó, ou seja, apontar
	para o end de mem do novo nó
	*/
	// *atu serve para navegar entre os nós
	tp_listase *novo_no, *atu;
	novo_no=aloca_listase(); //aqui está pegando o novo nó
	if (novo_no==NULL) return 0;
	//atribui os valores para o novo nó
	novo_no->info=e;
	novo_no->prox=NULL;
	// finaliza o encadeamento do nó
	/*
	se eu crio uma cópia da lista, preciso liga-la na lista original
	por isso é utilizado * para apontar para o conteudo de l
	*/
	if(listase_vazia(*l)){
		*l=novo_no;
	}
	else{
		atu=*l; // atu sempre guarda o primeiro nó da lista
		while(atu->prox!=NULL){
			atu=atu->prox; //aponta para o último nó
		}
		// atribui o end de mem novo_no ao ponteiro prox
		atu->prox=novo_no;
	}
	return 1;
}

void imprime_listase(tp_listase *lista){
	tp_listase *atu; // *atu aponta para o end de mem de uma struct
	atu=lista; // atu sempre guarda o primeiro nó da lista
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
	atu=*lista; //aponta para o primeiro nó
	ant=NULL; //sempre começa apontando pra nulo, pois ele é anterior a atu
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
