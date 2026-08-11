#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(){
	
	//área do circulo
	float raio, area, raioQuadrado;
	printf("Insira o valor do Raio: ");
	scanf("%f", &raio);
	raioQuadrado = raio*raio;
	area = pi*raioQuadrado;
	printf("a área do circulo de raio %f = %f\n", raio, area);
	
	//área do trapezio descendente
	
	float A, B, b, h;
	
	printf("Insira a Base Maior: ");
	scanf("%f", &B);
	printf("Insira a Base Menor: ");
	scanf("%f", &b);
	printf("Insira a Altura: ");
	scanf("%f", &h);
	A = ((B+b)*h)/2;
	printf("A área do trapezio = %f", A);
	
	
	return 0;
}
