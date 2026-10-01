#include <stdio.h>
#include <stdlib.h>

/*PROVA 1 (ADS 2 N-A)*/

void p1_q0(void) {
    int n1, n2, n3, n4, n5;
    int achou = 0;

    printf("Digite 5 numeros inteiros: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if (n2 == n1 + 1) {
        printf("Consecutivos: %d e %d\n", n1, n2);
        achou = 1;
    }
    if (n3 == n2 + 1) {
        printf("Consecutivos: %d e %d\n", n2, n3);
        achou = 1;
    }
    if (n4 == n3 + 1) {
        printf("Consecutivos: %d e %d\n", n3, n4);
        achou = 1;
    }
    if (n5 == n4 + 1) {
        printf("Consecutivos: %d e %d\n", n4, n5);
        achou = 1;
    }
    if (achou == 0) {
        printf("Nao ha numeros consecutivos.\n");
    }
}

void p1_q1(void) {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura invalida!\n");
    } else {
        imc = peso / (altura * altura);
        printf("IMC = %.2f - ", imc);

        if (imc < 18.5) {
            printf("Abaixo do peso\n");
        } else if (imc < 25.0) {
            printf("Normal\n");
        } else if (imc < 30.0) {
            printf("Acima do peso\n");
        } else {
            printf("Obeso\n");
        }
    }
}

void p1_q2(void) {
    int A = 6, B = 0, C = 0;

    printf("Estado inicial: A=%d B=%d C=%d\n\n", A, B, C);

    A = A - 1;  C = C + 1;
    printf("1) Mover disco 1 de A para C: A=%d B=%d C=%d\n", A, B, C);

    A = A - 2;  B = B + 2;
    printf("2) Mover disco 2 de A para B: A=%d B=%d C=%d\n", A, B, C);

    C = C - 1;  B = B + 1;
    printf("3) Mover disco 1 de C para B: A=%d B=%d C=%d\n", A, B, C);

    A = A - 3;  C = C + 3;
    printf("4) Mover disco 3 de A para C: A=%d B=%d C=%d\n", A, B, C);

    B = B - 1;  A = A + 1;
    printf("5) Mover disco 1 de B para A: A=%d B=%d C=%d\n", A, B, C);

    B = B - 2;  C = C + 2;
    printf("6) Mover disco 2 de B para C: A=%d B=%d C=%d\n", A, B, C);

    A = A - 1;  C = C + 1;
    printf("7) Mover disco 1 de A para C: A=%d B=%d C=%d\n", A, B, C);

    printf("\nResolvido em 7 movimentos! (A=0, B=0, C=6)\n");
}

/*PROVA 2 (ESOFT 2 M - A)*/

void p2_q0(void) {
    int n1, n2, n3, n4;
    int achou = 0;

    printf("Digite 4 numeros inteiros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 % 2 != 0 && n1 % 5 == 0) {
        printf("%d e impar e multiplo de 5\n", n1);
        achou = 1;
    }
    if (n2 % 2 != 0 && n2 % 5 == 0) {
        printf("%d e impar e multiplo de 5\n", n2);
        achou = 1;
    }
    if (n3 % 2 != 0 && n3 % 5 == 0) {
        printf("%d e impar e multiplo de 5\n", n3);
        achou = 1;
    }
    if (n4 % 2 != 0 && n4 % 5 == 0) {
        printf("%d e impar e multiplo de 5\n", n4);
        achou = 1;
    }
    if (achou == 0) {
        printf("Nenhum numero impar e multiplo de 5.\n");
    }
}

void p2_q1(void) {
    int total, capacidade;

    printf("Quantidade total de itens: ");
    scanf("%d", &total);
    printf("Capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    if (capacidade <= 0 || total < 0) {
        printf("Valores invalidos!\n");
    } else {
        printf("Mochilas totalmente preenchidas: %d\n", total / capacidade);
    }
}

int grupo_unidade(int cod) {
    int grupo;
    switch (cod) {
        case 1: case 2: case 3:  grupo = 1; break;
        case 4: case 5:          grupo = 2; break;
        case 8: case 9:          grupo = 3; break;
        case 10: case 11:        grupo = 4; break; 
        default:                 grupo = 0;        
    }
    return grupo;
}

void p2_q2(void) {
    double valor, base, resultado;
    int uOrigem, uDestino;

    printf("Codigos: 1=C 2=F 3=K 4=m 5=mi 8=kg 9=lb 10=mph 11=km/h\n");
    printf("Valor a converter: ");
    scanf("%lf", &valor);
    printf("Codigo da unidade do valor: ");
    scanf("%d", &uOrigem);
    printf("Codigo da unidade de conversao: ");
    scanf("%d", &uDestino);

    if (grupo_unidade(uOrigem) == 0 || grupo_unidade(uDestino) == 0) {
        printf("Erro: unidade nao existe no sistema!\n");
    } else if (grupo_unidade(uOrigem) != grupo_unidade(uDestino)) {
        printf("Erro: nao e possivel converter entre grandezas diferentes!\n");
    } else {
        switch (uOrigem) {
            case 2:  base = (valor - 32) / 1.8;  break;
            case 3:  base = valor - 273.15;      break;
            case 5:  base = valor * 1609.34;     break;
            case 9:  base = valor / 2.205;       break; 
            case 10: base = valor * 1.609;       break;
            default: base = valor;                      
        }

        switch (uDestino) {
            case 2:  resultado = base * 1.8 + 32;   break;
            case 3:  resultado = base + 273.15;     break;
            case 5:  resultado = base / 1609.34;    break;
            case 9:  resultado = base * 2.205;      break;
            case 10: resultado = base / 1.609;      break;
            default: resultado = base;
        }

        printf("Valor convertido: %.2f\n", resultado);
    }
}

/*PROVA 3 (ESOFT 2 M - B)*/

void p3_q0(void) {
    int total, capacidade;

    printf("Quantidade total de itens: ");
    scanf("%d", &total);
    printf("Capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    if (capacidade <= 0 || total < 0) {
        printf("Valores invalidos!\n");
    } else {
        printf("Mochilas totalmente preenchidas: %d\n", total / capacidade);
        printf("Itens que sobraram: %d\n", total % capacidade);
    }
}

void p3_q1(void) {
    int a, b, c;

    printf("Digite 3 numeros inteiros (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("os numeros tem que ser distintos\n");
    } else if (a < b && b < c) {
        printf("%d %d %d\n", a, b, c);
    } else if (a < c && c < b) {
        printf("%d %d %d\n", a, c, b);
    } else if (b < a && a < c) {
        printf("%d %d %d\n", b, a, c);
    } else if (b < c && c < a) {
        printf("%d %d %d\n", b, c, a);
    } else if (c < a && a < b) {
        printf("%d %d %d\n", c, a, b);
    } else {
        printf("%d %d %d\n", c, b, a);
    }
}

void p3_q2(void) {
    double v1, v2;
    int codigo;

    printf("Digite o 1o valor: ");
    scanf("%lf", &v1);
    printf("Digite o 2o valor: ");
    scanf("%lf", &v2);
    printf("Codigo da operacao (1 = >, 2 = <, 3 = ==, 4 = !=): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            if (v1 > v2) printf("Verdadeiro\n"); else printf("Falso\n");
            break;
        case 2:
            if (v1 < v2) printf("Verdadeiro\n"); else printf("Falso\n");
            break;
        case 3:
            if (v1 == v2) printf("Verdadeiro\n"); else printf("Falso\n");
            break;
        case 4:
            if (v1 != v2) printf("Verdadeiro\n"); else printf("Falso\n");
            break;
        default:
            printf("operador invalido\n");
    }
}

/*MENUS*/

void menu_prova1(void) {
    int q;
    printf("\n--- PROVA 1 (ADS 2 N - A) ---\n");
    printf("0 - Numeros consecutivos\n1 - IMC\n2 - Torres de Hanoi\nEscolha a atividade: ");
    scanf("%d", &q);
    printf("\n");
    switch (q) {
        case 0: p1_q0(); break;
        case 1: p1_q1(); break;
        case 2: p1_q2(); break;
        default: printf("Atividade invalida!\n");
    }
}

void menu_prova2(void) {
    int q;
    printf("\n--- PROVA 2 (ESOFT 2 M - A) ---\n");
    printf("0 - Impares multiplos de 5\n1 - Mochilas\n2 - Conversao de unidades\nEscolha a atividade: ");
    scanf("%d", &q);
    printf("\n");
    switch (q) {
        case 0: p2_q0(); break;
        case 1: p2_q1(); break;
        case 2: p2_q2(); break;
        default: printf("Atividade invalida!\n");
    }
}

void menu_prova3(void) {
    int q;
    printf("\n--- PROVA 3 (ESOFT 2 M - B) ---\n");
    printf("0 - Mochilas e sobra\n1 - Tres numeros distintos\n2 - Operacao relacional\nEscolha a atividade: ");
    scanf("%d", &q);
    printf("\n");
    switch (q) {
        case 0: p3_q0(); break;
        case 1: p3_q1(); break;
        case 2: p3_q2(); break;
        default: printf("Atividade invalida!\n");
    }
}

int main(void) {
    int prova;

    printf("===== LINGUAGEM E TECNICAS DE PROGRAMACAO =====\n");
    printf("1 - Prova ADS 2 N (A)\n");
    printf("2 - Prova ESOFT 2 M (A)\n");
    printf("3 - Prova ESOFT 2 M (B)\n");
    printf("Escolha a prova: ");
    scanf("%d", &prova);

    switch (prova) {
        case 1: menu_prova1(); break;
        case 2: menu_prova2(); break;
        case 3: menu_prova3(); break;
        default: printf("Prova invalida!\n");
    }

    return 0;
}
