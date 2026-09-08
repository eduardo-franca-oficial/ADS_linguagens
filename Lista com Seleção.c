#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// =========================
// LISTA 1
// =========================

// ----------------------
// EXERCÍCIO 1 - Lista 1
// ----------------------
void exercicio1() {
    int A, B, C;

    printf("\n---------------\n");
    printf("| Exercício 1 |\n");
    printf("---------------\n");

    printf("Escreva o primeiro valor: ");
    scanf("%d", &A);

    printf("Escreva o segundo valor: ");
    scanf("%d", &B);

    C = A;
    A = B;
    B = C;

    printf("Os valores invertidos sao: %d e %d\n", A, B);
}

// ----------------------
// EXERCÍCIO 2 - Lista 1
// ----------------------
void exercicio2() {

    printf("\n---------------\n");
    printf("| Exercício 2 |\n");
    printf("---------------\n");

    printf("Este exercício ainda nao foi implementado.\n");
}

// ----------------------
// EXERCÍCIO 3 - Lista 1
// ----------------------
void exercicio3() {
    int D, res;
    int b64, b32, b16, b8, b4, b2, b1;

    printf("\n---------------\n");
    printf("| Exercício 3 |\n");
    printf("---------------\n");

    printf("Insira o valor: ");
    scanf("%d", &D);

    b64 = D % 2;
    res = D / 2;

    b32 = res % 2;
    res = res / 2;

    b16 = res % 2;
    res = res / 2;

    b8 = res % 2;
    res = res / 2;

    b4 = res % 2;
    res = res / 2;

    b2 = res % 2;
    res = res / 2;

    b1 = res % 2;

    printf("O binario de %d e: %d%d%d%d%d%d%d\n",
           D, b1, b2, b4, b8, b16, b32, b64);
}

// ----------------------
// EXERCÍCIO 4 - Lista 1
// ----------------------
void exercicio4() {
    float sal, vendas, comissao, total;

    printf("\n---------------\n");
    printf("| Exercício 4 |\n");
    printf("---------------\n");

    printf("Digite o seu salario: ");
    scanf("%f", &sal);

    printf("Digite o valor total de vendas: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.15;

    if (vendas > 0) {
        total = sal + comissao;

        printf("Seu salario e de R$%.2f\n", sal);
        printf("Sua comissao e de R$%.2f\n", comissao);
        printf("TOTAL: R$%.2f\n", total);
    } else {
        printf("Seu salario e R$%.2f e voce nao teve nenhuma comissao!\n", sal);
    }
}

// ----------------------
// EXERCÍCIO 5 - Lista 1
// ----------------------
void exercicio5() {
    int n1, n2, n3, n4;
    int soma, media, produ;

    printf("\n---------------\n");
    printf("| Exercício 5 |\n");
    printf("---------------\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("A soma entre %d + %d + %d + %d = %d\n",
           n1, n2, n3, n4, soma);

    media = soma / 4;

    printf("A media entre os numeros escolhidos e %d\n", media);

    produ = n1 * n2 * n3 * n4;

    printf("O produtorio e %d\n", produ);
}

// ----------------------
// EXERCÍCIO 6 - Lista 1
// ----------------------
void exercicio6() {
    int ano, meses, dias;

    printf("\n---------------\n");
    printf("| Exercício 6 |\n");
    printf("---------------\n");

    printf("Digite sua idade: ");
    scanf("%d", &ano);

    meses = ano * 12;
    dias = ano * 365;

    printf("Sua idade em anos: %d\n", ano);
    printf("Sua idade em meses: %d\n", meses);
    printf("Sua idade em dias: %d\n", dias);
}

// ----------------------
// EXERCÍCIO 7 - Lista 1
// ----------------------
void exercicio7() {
    float raio, r3, volume;
    const float PI = 3.14159265359;

    printf("\n---------------\n");
    printf("| Exercício 7 |\n");
    printf("---------------\n");

    printf("Digite o raio: ");
    scanf("%f", &raio);

    r3 = pow(raio, 3);

    volume = (4.0 / 3.0) * PI * r3;

    printf("O volume da esfera e: %.2f\n", volume);
}

// ----------------------
// EXERCÍCIO 8 - Lista 1
// ----------------------
void exercicio8() {
    int x1, x2, y1, y2;
    int p1, p2;
    float dis;

    printf("\n---------------\n");
    printf("| Exercício 8 |\n");
    printf("---------------\n");

    printf("Insira o valor do par ordenado P1 (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Insira o valor do par ordenado P2 (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    p1 = pow(x2 - x1, 2);
    p2 = pow(y2 - y1, 2);

    dis = sqrt(p1 + p2);

    printf("A distancia entre P1 e P2 = %.2f\n", dis);
}


// =========================
// LISTA 2
// =========================

// ----------------------
// EXERCÍCIO 1 - Lista 2
// ----------------------
void exercicio9() {
    int idade, anoatual, ano;

    printf("\n----------------\n");
    printf("| Exercício 1  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    anoatual = 2026;

    printf("Qual sua idade? ");
    scanf("%d", &idade);

    ano = anoatual - idade;

    printf("Voce nasceu em %d\n", ano);
}

// ----------------------
// EXERCÍCIO 2 - Lista 2
// ----------------------
void exercicio10() {
    float K, M;

    printf("\n----------------\n");
    printf("| Exercício 2  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    printf("Qual a velocidade em km/h: ");
    scanf("%f", &K);

    M = K / 3.6;

    printf("%.1f km/h convertido em metros por segundo e %.2f m/s\n",
           K, M);
}

// ----------------------
// EXERCÍCIO 3 - Lista 2
// ----------------------
void exercicio11() {
    float real, dolar, valor;

    printf("\n----------------\n");
    printf("| Exercício 3  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    dolar = 5.14;

    printf("Digite o valor em reais: R$");
    scanf("%f", &real);

    valor = real / dolar;

    printf("O valor em dolares e: $%.2f\n", valor);
}

// ----------------------
// EXERCÍCIO 4 - Lista 2
// ----------------------
void exercicio12() {
    float c, f;

    printf("\n----------------\n");
    printf("| Exercício 4  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (c * 1.8) + 32;

    printf("%.1f C em Fahrenheit e %.1f F\n", c, f);
}

// ----------------------
// EXERCÍCIO 5 - Lista 2
// ----------------------
void exercicio13() {
    float R, G;
    const float PI = 3.14159265359;

    printf("\n----------------\n");
    printf("| Exercício 5  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    printf("Digite o angulo em graus: ");
    scanf("%f", &G);

    R = G * PI / 180;

    printf("O angulo em radianos e %.2f\n", R);
}

// ----------------------
// EXERCÍCIO 6 - Lista 2
// ----------------------
void exercicio14() {
    int n;

    printf("\n----------------\n");
    printf("| Exercício 6  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    printf("Escreva um numero: ");
    scanf("%d", &n);

    printf("O sucessor do numero %d e: %d\n", n, n + 1);
    printf("O antecessor e: %d\n", n - 1);
}

// ----------------------
// EXERCÍCIO 7 - Lista 2
// ----------------------
void exercicio15() {
    float a, b, c;

    printf("\n----------------\n");
    printf("| Exercício 7  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    a = 780000 * 46.0 / 100;
    b = 780000 * 32.0 / 100;
    c = 780000 * 22.0 / 100;

    printf("O valor do primeiro recebera: R$%.2f\n", a);
    printf("O valor do segundo recebera: R$%.2f\n", b);
    printf("O valor do terceiro recebera: R$%.2f\n", c);
}

// ----------------------
// EXERCÍCIO 8 - Lista 2
// ----------------------
void exercicio16() {
    int s, h, m, ss;

    printf("\n----------------\n");
    printf("| Exercício 8  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    printf("Digite quantos segundos durou: ");
    scanf("%d", &s);

    h = s / 3600;
    m = (s % 3600) / 60;
    ss = s % 60;

    printf("Foram %02d:%02d:%02d\n", h, m, ss);
}

// ----------------------
// EXERCÍCIO 9 - Lista 2
// ----------------------
void exercicio17() {
    float tempo, kmh, l, km;

    printf("\n----------------\n");
    printf("| Exercício 9  |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    printf("Insira o tempo da viagem (horas): ");
    scanf("%f", &tempo);

    printf("Insira a velocidade media da viagem (km/h): ");
    scanf("%f", &kmh);

    km = tempo * kmh;

    l = km / 12;

    printf("Foram gastos %.3f litros na viagem\n", l);
}

// -----------------------
// EXERCÍCIO 10 - Lista 2
// -----------------------
void exercicio18() {
    int a, b, c;
    int maior_temp, maior;

    printf("\n----------------\n");
    printf("| Exercício 10 |\n");
    printf("|    Lista 2   |\n");
    printf("----------------\n");

    printf("Insira os valores a serem comparados: ");
    scanf("%d %d %d", &a, &b, &c);

    maior_temp = ((a + b) + abs(a - b)) / 2;

    maior = ((maior_temp + c) + abs(maior_temp - c)) / 2;

    printf("O maior numero entre %d, %d e %d = %d\n",
           a, b, c, maior);
}


// =========================
// PROGRAMA PRINCIPAL
// =========================

int main() {

    int opcao;

    printf("\n=========================================\n");
    printf("||       LISTA DE EXERCICIOS           ||\n");
    printf("=========================================\n");

    printf("\n--- LISTA 1 ---\n");

    printf("1  - Exercício 1\n");
    printf("2  - Exercício 2\n");
    printf("3  - Exercício 3\n");
    printf("4  - Exercício 4\n");
    printf("5  - Exercício 5\n");
    printf("6  - Exercício 6\n");
    printf("7  - Exercício 7\n");
    printf("8  - Exercício 8\n");

    printf("\n--- LISTA 2 ---\n");

    printf("9  - Exercício 1\n");
    printf("10 - Exercício 2\n");
    printf("11 - Exercício 3\n");
    printf("12 - Exercício 4\n");
    printf("13 - Exercício 5\n");
    printf("14 - Exercício 6\n");
    printf("15 - Exercício 7\n");
    printf("16 - Exercício 8\n");
    printf("17 - Exercício 9\n");
    printf("18 - Exercício 10\n");

    printf("\n0 - Sair\n");

    printf("\nEscolha o exercício: ");
    scanf("%d", &opcao);

    switch (opcao) {

        // =========================
        // LISTA 1
        // =========================

        case 1:
            exercicio1();
            break;

        case 2:
            exercicio2();
            break;

        case 3:
            exercicio3();
            break;

        case 4:
            exercicio4();
            break;

        case 5:
            exercicio5();
            break;

        case 6:
            exercicio6();
            break;

        case 7:
            exercicio7();
            break;

        case 8:
            exercicio8();
            break;


        // =========================
        // LISTA 2
        // =========================

        case 9:
            exercicio9();
            break;

        case 10:
            exercicio10();
            break;

        case 11:
            exercicio11();
            break;

        case 12:
            exercicio12();
            break;

        case 13:
            exercicio13();
            break;

        case 14:
            exercicio14();
            break;

        case 15:
            exercicio15();
            break;

        case 16:
            exercicio16();
            break;

        case 17:
            exercicio17();
            break;

        case 18:
            exercicio18();
            break;

        case 0:
            printf("\nEncerrando o programa...\n");
            break;

        default:
            printf("\nOpcao invalida! Escolha um exercicio de 1 a 18.\n");
    }

    return 0;
}
