#include<stdio.h>
int main(){
int dia, diaf, hora, horaf, minuto, minutof, segundo, segundof;

scanf("Dia %d", &dia);
scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
scanf("Dia %d", &diaf);
scanf("%d : %d : %d", &horaf, &minutof, &segundof);

segundo = segundof - segundo;
minuto = minutof - minuto;
hora = horaf - hora;
dia = diaf - dia;

if (segundo < 0){segundo += 60;minuto--;}

if (minuto < 0){minuto += 60;hora--;}

if (hora < 0){hora += 24;dia--;}

printf("%d dia(s)\n", dia);
printf("%d hora(s)\n", hora);
printf("%d minuto(s)\n", minuto);
printf("%d segundo(s)\n", segundo);
}

 /*
ano = (N/365);
m1 = (N % 365);
meses = (m1/30);
dias = (m1%30);     

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, meses, dias);
*/
