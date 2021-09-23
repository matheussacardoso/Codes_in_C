#include <stdio.h>
int main(){
   int a, p, menor,n;
    scanf("%d", &n);
    int x[n];
    for(a=0; a<n; a++)
        scanf("%d", &x[a]);
    menor=x[0];
    for(a=1; a<n; a++){
        if(menor>x[a]){
            menor=x[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, p);
    return 0;
}
