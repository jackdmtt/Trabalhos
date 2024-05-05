#include <stdio.h>

int main() {
    int conta, ultimoDigito, inverso, soma, produto, digitoVerify;
    int numeroConta;

    do {
        printf("Informe um n° de conta com quatro dígitos (entre 1000 e 9999): ");
        scanf("%d", &numeroConta);
    } while(numeroConta < 1000 || numeroConta > 9999);

    conta = numeroConta / 10; // separa os três primeiros dígitos
    /*printf("\nN° conta: %d\n", conta);*/
    ultimoDigito = numeroConta % 10; // separa o último dígito
    /*printf("Último digito: %d\n", ultimoDigito);*/

    // calcula o inverso do n° da conta
    inverso = (conta % 10) * 100 + ((conta / 10) % 10) * 10 + conta / 100;
    /*printf("Inverso da conta: %d\n", inverso);*/

    // soma o n° da conta com o seu inverso
    soma = conta + inverso;
    /*printf("Soma do inverso: %d\n", soma);*/

    // multiplica cada dígito pela sua ordem posicional e soma os resultados
    produto = (soma / 100) * 1 + ((soma / 10) % 10) * 2 + (soma % 10) * 3;
    /*printf("Produto da ordem posicional: %d\n", produto);*/

    // obtém o último dígito do resultado
    digitoVerify = produto % 10;
    printf("\nDígito verificador: %d\n", digitoVerify);

    // verifica se o dígito verificador está correto
    if(digitoVerify == ultimoDigito) {
        printf("O número da conta %d-%d é válido.\n", conta, ultimoDigito);
    } else {
        printf("O número da conta %d-%d é inválido.\n", conta, ultimoDigito);
    }

    return 0;
}
