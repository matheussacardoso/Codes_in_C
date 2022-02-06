#include <stdio.h>
#define MAX 100
#include <string.h>

typedef int
	tp_item;

typedef struct{
	int topo;
	tp_item item[MAX];
}tp_pilha;

void inicializa_pilha(tp_pilha *p){
	p ->topo = -1;
}

int pilha_vazia(tp_pilha *p){
	if (p->topo == -1)
		return 1;
	return 0;
}

int pilha_cheia(tp_pilha *p){
	if (p->topo == MAX-1){
		return 1;
	}
	else{
		return 0;
	}
}


int push (tp_pilha *p, tp_item e){
	if (pilha_cheia(p)==1) return 0;
	p->topo++;
	p->item[p->topo]=e;
	return 1;
}

int pop(tp_pilha *p, tp_item *e){
	if (pilha_vazia(p)) return 0;
	*e=p->item[p->topo];
	p->topo--;
	return 1;
}

int top (tp_pilha *p, tp_item *e){
	if (pilha_vazia(p)) return 0;
	*e=p->item[p->topo];
	return 1;
}

int main(){
	int i,tam,teste,cont;
	char exp[1001];
	tp_item e,e2;
	tp_pilha p;
	
	scanf("%d",&teste);
	while (teste--){
		inicializa_pilha(&p);
		scanf("%s", &exp);
		tam = strlen(exp);
		cont= 0;
		for (i=0;i < tam; i++){
			if (exp[i] == '<'){
				push(&p,exp[i]);
			}
			if(exp[i] == '>' && !pilha_vazia(&p)){
				top(&p,&e);
				if (e == '<'){
					pop(&p,&e2);
					cont++;
				}
			}
		}
		printf("%d\n", cont);
	}
	return 0;
}
