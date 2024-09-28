#include <stdio.h>

int main() {
    char continuar;

    do {
        int quantidade, totalItens = 0, i;
        float valor, valorTotal = 0, valorMedio, reais, centavos;
        int notas[] = {100, 50, 20, 10, 5, 2, 1};
        int quantNotas[7] = {0};

    // leitura e validação da quantidade e valor dos produtos
        while(1) {
            printf("Informe a quantidade do produto: ");
            scanf("%d", &quantidade);

            if(quantidade <= 0) {
                break;
            }

            do {
                printf("Informe o valor do produto: ");
                scanf("%f", &valor);
            } while(valor <= 0);

            valorTotal += valor * quantidade;
            totalItens += quantidade;
        }

        // cálculo do valor médio dos itens
        if(totalItens > 0) {
            valorMedio = valorTotal / totalItens;
        } else {
            valorMedio = 0;
        }

        // separação de reais e centavos
        reais = (int)valorTotal;
        centavos = (valorTotal - reais);

        // separação em notas
        int restante = (int)reais;
        for(i = 0; i < 7; i++) {
            quantNotas[i] = restante / notas[i];
            restante = restante % notas[i];
        }

        // mostra os resultados
        printf("\nValor total da compra: R$%.2f\n", valorTotal);
        printf("Valor médio dos itens: R$%.2f\n", valorMedio);
        printf("\nReais: %d - Centavos: %.2f\n", (int)reais, centavos);
        printf("Cédulas de:\n");
        for(i = 0; i < 7; i++) {
            if(quantNotas[i] > 0) {
                if (i == 6) {
                    printf("%d moeda(s) de R$%d\n", quantNotas[i], notas[i]);
                } else {
                    printf("%d nota(s) de R$%d\n", quantNotas[i], notas[i]);
                }
            }
        }

        printf("\nDeseja repetir? (s/n): ");
        scanf(" %c", &continuar); // Note o espaço antes do %c para consumir o caractere de nova linha

    } while (continuar == 's' || continuar == 'S');

    printf("Programa finalizado.\n");

    return 0;
}
