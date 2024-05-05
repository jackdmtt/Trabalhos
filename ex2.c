#include <stdio.h>

int main() {
    int a1, a2, a3;
    int temp1, temp2, temp3;

    printf("Quantas pessoas no 1° andar: ");
    scanf("%d", &a1);

    printf("Quantas no 2°: ");
    scanf("%d", &a2);

    printf("Quantas no 3°: ");
    scanf("%d", &a3);

    
    temp1 = (a2 * 2) + (a3 * 4);// calcula o tempo total caso a máquina esteja no 1° andar

   
    temp2 = (a1 * 2) + (a3 * 2); // calcula o temp total caso a máquina esteja no 2° andar

    
    temp3 = (a1 * 4) + (a2 * 2);// calcula o tempo total caso a máquina esteja no 3° andar

    // encontra o mínimo entre tempo1, tempo2 e tempo3
    int min_temp = temp1;
    if (temp2 < min_temp) min_temp = temp2;
    if (temp3 < min_temp) min_temp = temp3;

    printf("\nO total de minutos a serem gastos é de: %d minutos", min_temp);
    
    return 0;
}
