#include <stdio.h>
int main(){
char jogador[100];
int s,b,a,s1,b1,a1,num;
double somaS=0.00, somaB=0.00, somaA=0.00, somaS1=0.00, somaB1=0.00, somaA1=0.00;

scanf("%d", &num);
while(num--){
scanf(" %[^\n]s", jogador);
scanf("%d %d %d", &s, &b, &a);
scanf("%d %d %d", &s1, &b1, &a1);
somaS += s;
somaB += b;
somaA += a;
somaS1 += s1;
somaB1 += b1;
somaA1 += a1;
}	
printf("Pontos de Saque: %.2lf %%.\n", somaS1/somaS*100.00);
printf("Pontos de Bloqueio: %.2lf %%.\n", somaB1/somaB*100.00);
printf("Pontos de Ataque: %.2lf %%.\n", somaA1/somaA*100.00); 
return 0;
}
