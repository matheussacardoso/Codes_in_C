/*#include <stdio.h>
int main(){
	double value;
	scanf ("%.2f", &value);
	switch (value){
		case (value/100):
			printf("%lf nota(s) de R$ 100.00\n", (value % 100));
		break;
		case (value/50):
			printf("%lf nota(s) de R$ 50.00\n", (value % 50));
		break;
		case (value/20):
			printf("%lf nota(s) de R$ 20.00\n", (value % 20));
		break;
		case (value/10):
			printf("%lf nota(s) de R$ 10.00\n", (value % 10));
		break;
		case (value/5):
			printf("%lf nota(s) de R$ 5.00\n", (value % 5));
		break;
		case (value/2):
			printf("%lf nota(s) de R$ 100.00\n", (value % 2));
		break;
		case (value/1):
			printf("%lf moeda(s) de R$ 1.00\n", (value % 1));
		break;
		case (value/0.5):
			printf("%lf moeda(s) de R$ 0.50\n", (value % 0.5));
		break;
		case (value/0.25):
			printf("%lf moeda(s) de R$ 0.25\n", (value % 0.25));
		break;
		case (value/0.05):
			printf("%lf moeda(s) de R$ 0.05\n", (value % 0.05));
		break;
		case (value/1):
			printf("%lf moeda(s) de R$ 0.01\n", (value % 0.01));
		break;
	}
		printf("NOTAS:\n");
		printf("MOEDAS:\n");
	
	return 0;		
	}
*/
#include <stdio.h>
int main()
{
    double n;
    int inputInt, a, b, afterPoint;

    scanf("%lf", &n);

    inputInt = n;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", inputInt/100);
    a = inputInt % 100;

    printf("%d nota(s) de R$ 50.00\n", a/50);
    a = a % 50;

    printf("%d nota(s) de R$ 20.00\n", a/20);
    a = a % 20;

    printf("%d nota(s) de R$ 10.00\n", a/10);
    a = a % 10;

    printf("%d nota(s) de R$ 5.00\n", a/5);
    a = a % 5;

    printf("%d nota(s) de R$ 2.00\n", a/2);
    a = a % 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", a/1);

    afterPoint = (n * 100) - (inputInt * 100);

    printf("%d moeda(s) de R$ 0.50\n", afterPoint/50);
    b = afterPoint % 50;

    printf("%d moeda(s) de R$ 0.25\n", b/25);
    b = b % 25;

    printf("%d moeda(s) de R$ 0.10\n", b/10);
    b = b % 10;

    printf("%d moeda(s) de R$ 0.05\n", b/5);
    b = b % 5;

    printf("%d moeda(s) de R$ 0.01\n", b/1);
    b = b % 1;

    return 0;
}
