#include <stdio.h>


 int main(){
    int notas, quantidade;

    scanf("%d", &notas);

    printf("%d\n", notas);
    printf("%d nota(s) de R$ 100,00\n", notas/100);
    quantidade = (notas%100);

    printf("%d nota(s) de R$ 50,00\n", quantidade/50);
    quantidade = (quantidade%50);

    printf("%d nota(s) de R$ 20,00\n", quantidade/20);                                                                                                                        
    quantidade = (quantidade%20);

    printf("%d nota(s) de R$ 10,00\n", quantidade/10);
    quantidade = (quantidade%10);

    printf("%d nota(s) de R$ 5,00\n", quantidade/5);
    quantidade = (quantidade%5);

    printf("%d nota(s) de R$ 2,00\n", quantidade/2);
    quantidade = (quantidade%2);

    printf("%d nota(s) de R$ 1,00\n", quantidade/1);
    return 0;
 }
