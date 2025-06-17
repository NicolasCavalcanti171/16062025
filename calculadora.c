#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"  // Só use se estiver separado

int main() {
    float n1, n2, resultado;
    char operacao;
    char continuar;

    do {
        printf("Digite o primeiro número: ");
        scanf("%f", &n1);

        printf("Digite a operação (+, -, *, /): ");
        scanf(" %c", &operacao);

        printf("Digite o segundo número: ");
        scanf("%f", &n2);

        switch (operacao) {
            case '+':
                resultado = soma(n1, n2);
                break;
            case '-':
                resultado = subtracao(n1, n2);
                break;
            case '*':
                resultado = multi(n1, n2);
                break;
            case '/':
                resultado = divisao(n1, n2);
                break;
            default:
                printf("Operação inválida!\n");
                continue;
        }

        printf("Resultado: %.2f\n", resultado);

        printf("Deseja fazer outro cálculo? (Digite 'q' para sair): ");
        scanf(" %c", &continuar);

    } while (continuar != 'q');

    return 0;
}

