#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 100
#define QTD 10

int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}
int ehPrimo(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int ehPar(int n) {
    return n % 2 == 0;
}
double distanciaEuclidiana(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
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

void exercicio5() {
    int vetor[TAM];
    int i;

    printf("\n=== Exercicio 5 ===\n");
    printf("Digite %d numeros inteiros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("\nValor | Paridade | Primalidade\n");
    for (i = 0; i < TAM; i++) {
        printf("%5d | %-8s | %s\n",
               vetor[i],
               ehPar(vetor[i]) ? "par" : "impar",
               ehPrimo(vetor[i]) ? "primo" : "nao primo");
    }
}

void exercicio6() {
    double x1[QTD], y1[QTD], x2[QTD], y2[QTD];
    int i;

    printf("\n=== Exercicio 6 ===\n");
    printf("Digite os %d valores de x1:\n", QTD);
    for (i = 0; i < QTD; i++) {
        scanf("%lf", &x1[i]);
    }
    printf("Digite os %d valores de y1:\n", QTD);
    for (i = 0; i < QTD; i++) {
        scanf("%lf", &y1[i]);
    }
    printf("Digite os %d valores de x2:\n", QTD);
    for (i = 0; i < QTD; i++) {
        scanf("%lf", &x2[i]);
    }
    printf("Digite os %d valores de y2:\n", QTD);
    for (i = 0; i < QTD; i++) {
        scanf("%lf", &y2[i]);
    }
    printf("\nDistancias euclidianas:\n");
    for (i = 0; i < QTD; i++) {
        printf("p1(%.2f, %.2f) e p2(%.2f, %.2f): d = %.4f\n",
               x1[i], y1[i], x2[i], y2[i],
               distanciaEuclidiana(x1[i], y1[i], x2[i], y2[i]));
    }
}

void exercicio7() {
    int vetor[TAM];
    int i, j;
    int encontrou = 0;

    printf("\n=== Exercicio 7 ===\n");
    printf("Digite %d numeros inteiros:\n", TAM);

    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }
    i = 0;
    while (i < TAM - 1) {
        if (vetor[i + 1] == vetor[i] + 1) {
            j = i;
            while (j < TAM - 1 && vetor[j + 1] == vetor[j] + 1) {
                j++;
            }
            if (!encontrou) {
                printf("\nValores em ordem consecutiva:\n");
                encontrou = 1;
            }
            for (; i <= j; i++) {
                printf("%d ", vetor[i]);
            }
            printf("\n");
        } else {
            i++;
        }
    }
    if (!encontrou) {
        printf("\nNenhum valor em ordem consecutiva foi encontrado.\n");
    }
}

int main() {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    return 0;
}
