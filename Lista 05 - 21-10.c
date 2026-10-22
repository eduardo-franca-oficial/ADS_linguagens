#include <stdio.h>
#include <stdlib.h>
#define TAM 100
#define QTD 10

int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

void exercicio1() {
    int numeros[TAM];
    int ordenados[TAM];
    int i, j, aux;

    printf("\n=== Exercicio 1 ===\n");
    printf("Digite %d numeros inteiros:\n", TAM);

    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
        ordenados[i] = numeros[i];
    }

    printf("\nNumeros na ordem inversa da leitura:\n");
    for (i = TAM - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - 1 - i; j++) {
            if (ordenados[j] < ordenados[j + 1]) {
                aux = ordenados[j];
                ordenados[j] = ordenados[j + 1];
                ordenados[j + 1] = aux;
            }
        }
    }

    printf("\nNumeros ordenados do maior para o menor:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", ordenados[i]);
    }
    printf("\n");
}

void exercicio2() {
    double valor, mantissa;
    int expoente = 0;

    printf("\n=== Exercicio 2 ===\n");
    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Valor invalido, digite apenas valores positivos.\n");
        return;
    }

    mantissa = valor;

    while (mantissa >= 10) {
        mantissa = mantissa / 10;
        expoente++;
    }

    while (mantissa < 1) {
        mantissa = mantissa * 10;
        expoente--;
    }

    printf("Notacao cientifica: %.6f x 10^%d\n", mantissa, expoente);
}

void exercicio3() {
    int n, copia, i;
    int quantidadeBits = 0;
    int bits[64];

    printf("\n=== Exercicio 3 ===\n");

    do {
        printf("Digite um numero n (positivo e menor ou igual a 64): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 64);

    copia = n;
    while (copia > 0) {
        bits[quantidadeBits] = copia % 2;
        copia = copia / 2;
        quantidadeBits++;
    }

    printf("%d em binario: ", n);
    for (i = quantidadeBits - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
    printf("\n");
}

void exercicio4() {
    int valores[QTD];
    int i, maior;

    printf("\n=== Exercicio 4 ===\n");
    printf("Digite %d valores inteiros:\n", QTD);

    for (i = 0; i < QTD; i++) {
        scanf("%d", &valores[i]);
    }

    maior = valores[0];
    for (i = 1; i < QTD; i++) {
        maior = maiorAB(maior, valores[i]);
    }

    printf("%d eh o maior\n", maior);
}

int main() {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    return 0;
}
