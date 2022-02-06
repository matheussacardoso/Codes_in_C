#include <stdio.h>
#include <math.h>

int main() {
	int D1, VF, VG;
	double D2, TF, TG;

	while(scanf("%d %d %d", &D1, &VF, &VG) != EOF) {
		D2 = sqrt(144 + pow(D1,2));
		TF = 12.0 / VF;
		TG = D2 / VG;
		if (TF >= TG){
			printf("S\n");
		}
		else{
			printf("N\n");
		}
	}
	return 0;
}
