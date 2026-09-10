#include <stdio.h>
#include <stdlib.h>


int main() {
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, soma, soma2;
	printf("escreva seu cpf: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
	
	n1 = n1*10;
	n2 = n2*9;
	n3 = n3*8;
	n4 = n4*7;
	n5 = n5*6;
	n6 = n6*5;
	n7 = n7*4;
	n8 = n8*3;
	n9 = n9*2;
	
	soma = ((n1+n2+n3+n4+n5+n6+n7+n8+n9)*10)%11;
	
	n1 = (n1/10)*11;
	n2 = (n2/9)*10;
	n3 = (n3/8)*9;
	n4 = (n4/7)*8;
	n5 = (n5/6)*7;
	n6 = (n6/5)*6;
	n7 = (n7/4)*5;
	n8 = (n8/3)*4;
	n9 = (n9/2)*3;
	n10 = n10*2;
	
	soma2 = ((n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)*10)%11;
	
	printf("Resultado: %d%d", soma, soma2);
	
	return 0;
}
