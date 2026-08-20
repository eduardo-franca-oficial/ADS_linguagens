#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	int D, res, b64, b32, b16, b8, b4, b2, b1;
	printf("Insira o valor: ");
	scanf("%d", &D);
	b64 = D%2;
	res = D/2;
	b32 = res%2;
	res = res/2;
	b16 = res%2;
	res = res/2;
	b8 = res%2;
	res = res/2;
	b4 = res%2;
	res = res/2;
	b2 = res%2;
	res = res/2;
	printf("O binário de %d é: %d%d%d%d%d%d%d", D, res%2, b2, b4, b8, b16, b32, b64);

	printf("O binário de %d é: %d%d%d%d%d%d%d", D, res%2, b2, b4, b8, b16, b32, b64);
	
	printf("\n---------------\n| Exercício 8 |\n---------------\n");
	int x1, x2, y1, y2, p1, p2;
	float dis;
	printf("Insira o valor do par ordenado p1(x1, y1): ");
	scanf("%d", &x1);
	scanf("%d", &y1);
	printf("Insira o valor do par ordenado p2(x2, y2): ");
	scanf("%d", &x2);
	scanf("%d", &y2);
	p1 = pow(x2-x1,2);
	p2 = pow(y2-y1,2);
	dis = sqrt(p1+p2);
	printf("A distância entre p1 e p1 = %f", dis);
}
