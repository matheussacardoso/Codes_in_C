#include <stdio.h>
// digitar o c�digo do produto e a quantidade dele
//numerar o card�pio
//precificar os produtos
//reconhecer o c�digo do produto e a quantidade
int main(){
	/*char cachorro, salada, bacon, torrada, refrigerante;
	int X,Y;
	int X[5];
	cachorro = 1 && (Y*4); 
	salada = 2 && (Y*4.50);
	bacon = 3 && (Y*5);
	torrada = 4 && (Y*2); 
	refrigerante = 5 && (Y*4);
	
	
	scanf ("%d", &X[2]);
	*/
	
	int X, Y;
	float total;
	scanf("%d %d",&X, &Y);
	switch (X){
		case 1:
			total= (Y*4);
			break;
		case 2:
			total = (Y*4.5);
			break;
		case 3:
			total = (Y*5);
			break;
		case 4:
			total = (Y*2);
			break;
		case 5:
			total = (Y*1.5);
			break;					
	}
	printf("Total: R$ %.2f\n", total);
	return 0;
}
