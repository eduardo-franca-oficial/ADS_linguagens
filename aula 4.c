#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c;
	int resultado;
	printf("Insira os valores de A B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b){
		resultado = a;
	}else{
		resultado = b;
	}
	if(resultado<c){
		resultado = c;
	}
	printf("O maior valor é: %d", resultado);
	
	int num;
	printf("Insira um número: ");
	scanf("%d", &num);
	if(num < 0){
		int negativo = num*num;
		printf("Número: %d", negativo);
	}else{
		int positivo = num*-1;
		printf("Número: %d", positivo);
	}
	return 0;
}
