#include <stdio.h>

int main(void) {
    double valor_bem;// valor do bem
    double taxa_deprec = 1.5;// taxa de depreciação em porcentagem (%)
    int periodo;// período de depreciação em anos
    double total_deprec = 0;// valor total depreciado

    printf("Digite o valor do bem: ");
    scanf("%lf", &valor_bem);
    printf("Digite o período de depreciação (em anos): ");
    scanf("%d", &periodo);

    printf("Ano   Valor do Bem   Depreciação   Valor Depreciado\n");

    int ano;

    for(ano = 1; ano <= periodo; ano++) {
        double valor_depreciado = valor_bem * (taxa_deprec / 100);// calculo para saber quanto foi a depreciacao
        valor_bem -= valor_depreciado;// calculo do valor depreciado do bem
        total_deprec += valor_depreciado;// total do valor depreciado baseado na quantidade de anos que o usuario digitar

        printf("%d      %.2f        %.2f        %.2f\n", ano, valor_bem + valor_depreciado, valor_depreciado, valor_bem);
    }

     printf("Valor total depreciado: %.2f\n", total_deprec);

    return 0;
}


