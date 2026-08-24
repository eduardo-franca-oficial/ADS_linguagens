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
	
	printf("\n------------EXERCICIO 2------------\n");
	float K, M;
	printf("\nQual a velocidade de em km/h: \n");
	scanf("%f", &K);
	M = K/36;
	printf("%.1f km/h convertido em metros e %.2f m/s",K,M);
	
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

	printf("\n---------------\n| Exercício 4 |\n---------------\n");
	float sal, vendas, comissao, total;
    printf("Digite o seu salário: ");
    scanf("%f", &sal);
    printf("Digite o valor total de vendas: ");
	scanf("%f", &vendas);
    comissao=vendas*0.15;
    if (vendas > 0){
     total = sal + comissao;
     printf("Seu salario e de %.2f, a boni doida e %.2f.\n TOTAL: R$%.2f\n", sal, comissao, total);
    }else{
        printf("Seu salario e R$%.2f e você nao teve nenhuma comissao!\n", sal);
    }
	
	printf("\n---------------\n| Exercício 5 |\n---------------\n");
	int n1, n2, n3, n4, soma, media, produ;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
	printf("Digite o segundo numero: ");
    scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);
    soma = n1 + n2 + n3 + n4;
    printf("A soma entre %d + %d + %d + %d é igual a: %d\n", n1, n2, n3, n4, soma);
    media = soma/4;
    printf("A media entre os numeros escolhidos e %d\n", media);
    produ = n1*n2*n3*n4;
    printf("O produtorio e %d\n", produ);
	
	printf("\n---------------\n| Exercício 6 |\n---------------\n");
	int ano, meses, dias;
    printf("Digite sua idade: ");
    scanf("%d", &ano);
    meses = ano*12;
    dias = ano*365;
	printf("Sua idade em anos: %d\n", ano);
	printf("Sua idade em meses: %d\n", meses);
    printf("Sua idade em dias: %d\n", dias);

	printf("\n---------------\n| Exercício 7 |\n---------------\n");
	float raio, r3, volume;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    r3 = pow(raio, 3);
    volume = (4/3.0) * pi * r3;
    printf("O volume da esfera é: %.2f\n", volume);
	
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
