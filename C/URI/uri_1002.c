#include<stdio.h>

int main()
{
    float A,B,C;
    double pi, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    pi=3.14159;

    scanf("%f %f %f",&A, &B, &C);
    
	TRIANGULO = (A*C)/2;
	CIRCULO = pi*C*C;
	TRAPEZIO = (A+B)*C/2;
	QUADRADO = (B*B);
	RETANGULO = (A*B);
	
	printf("TRIANGULO: %.3lf\n",TRIANGULO);
	printf("CIRCULO: %.3lf\n",CIRCULO);
	printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
	printf("QUADRADO: %.3lf\n",QUADRADO);
	printf("RETANGULO: %.3lf\n",RETANGULO);

    return 0;

}
