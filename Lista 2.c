#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("===========================\n|| Lista de Exercícios 2 ||\n===========================\n");

	printf("\n---------------\n| Exercício 1 |\n---------------\n");
	int idade, anoatual, ano;
	anoatual = 2026;
	printf("Qual sua idade? \n");
	scanf("%d0", &idade);
	ano = (anoatual - idade);
	printf("\nVoce nasceu em %d", ano);
	
	printf("\n---------------\n| Exercício 2 |\n---------------\n");
	float K,M;
	printf("\nQual a velocidade de em km/h: \n");
	scanf("%f", &K);
	M = K/36;
	printf("%.1f km/h convertido em metros e %.2f m/s",K,M);
	
	printf("\n---------------\n| Exercício 3 |\n---------------\n");
	float real,dolar,valor;
	dolar = 5.14;
	printf("Digite o valor em reais: R$");
	scanf("%f", &real);
	valor = real/dolar;
	printf("\nO valor em dolares e: $%.2f", valor);
	
	printf("\n---------------\n| Exercício 4 |\n---------------\n");
	float c,f;
	printf("Digite a temperatura em celcius: ");
	scanf("%f", &c);
	f = (c*1.8)+32;
	printf("%.1f C em fahrenheit e %.1f F", c,f);
	
	printf("\n---------------\n| Exercício 5 |\n---------------\n");
	float R,G;
	printf("Digite o angulo em graus: ");
	scanf("%f", &G);
	R = G*3.141592/180;
	printf("\nO angulo em radianos e %.2f", R);
	
	printf("\n---------------\n| Exercício 6 |\n---------------\n");
	int n;
	printf("Escreva um numero: ");
	scanf("%d", &n);
	printf("O sucessor do numero %d e: %d e o antecessor e: %d",n,n+1,n-1);

	printf("\n---------------\n| Exercício 7 |\n---------------\n");
	float a,b,c,valor;
	printf("O valor do primeiro recebera: R$%.2f", a = 780000*46/100);
	printf("\nO valor do segundo recebera: R$%.2f", b = 780000*32/100);
	printf("\nO valor do terceiro recebera: R$%.2f", c = 780000*22/100);

	printf("\n---------------\n| Exercício 8 |\n---------------\n");
	int s,h,m,ss;
	printf("Digite quantos segundos durou: ");
	scanf("%d", &s);
	h = s/3600;
	m = (s%3600)/60;
	ss = (s%3600)%60;
	printf("Foram %d:%d:%d",h,m,ss);
	
	printf("\n---------------\n| Exercício 9 |\n---------------\n");
	float tempo,kmh,l, km;
	printf("Insira o tempo da viagem(horas): ");
	scanf("%f",&tempo);
	printf("Insira a velocidade media da viagem km/h: ");
	scanf("%f",&kmh);
	km = tempo*kmh;
	l = km/12;
	printf("Foram gastos %.3f Litros na viagem",l);
	
	printf("\n----------------\n| Exercício 10 |\n----------------\n");
	int a, b, c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	maior_temp = ((a+b)+abs(a-b))/2;
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
	printf("O maior número entre |%d|%d|%d| = %d", a, b, c, maior);
	return 0;
}
