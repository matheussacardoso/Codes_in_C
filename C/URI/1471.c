#include <stdio.h>

int main(){
	int N,R,i,vivo;
	int todos[N];
	while(scanf("%d %d", &N, &R) != EOF) {
		for(i=0;i<=N;i++){
			todos[i] = 1;
		}
		for(i=0;i<R;i++){
			scanf("%d",&vivo);
			todos[vivo]=0;
		}
		if(N==R){
			printf("*\n");
		}
		else{
			for(i=1;i<=N;i++){
				if(todos[i]==1){
					printf("%d ",i);
				}
				else{
					todos[i]=1;
				}
			}
			printf("\n");
		}
	}
	return 0;
}
