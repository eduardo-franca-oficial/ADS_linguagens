#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("=========================\n|| Lista de Exercícios ||\n=========================\n");
	printf("---------------\n| Exercício 1 |\n---------------\n");
	//Números inteiros para serem lidos e devolvidos da forma inversa
	int A, B, C;
	printf("Escreva o primeiro valor: ");
	scanf("%d", &A);
	printf("Escreva o segundo valor: ");
	scanf("%d", &B);
	C = A;
	A = B;
	B = C;
	printf("Os valores são: %d e %d", A, B);
	
	printf("\n---------------\n| Exercício 2 |\n---------------\n");
	double D;
	printf("Escreva o valor: ");
	scanf("%lf", &D);
	printf("Seu valor: %.1lfx10", D);
	
	printf("\n---------------\n| Exercício 3 |\n---------------\n");
	int E;
	printf("Escreva o valor: ");
	scanf("%d", &E);
	printf("Seu valor: %b", E);
	return 0;
}
