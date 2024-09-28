#include <stdio.h>

int main() {
    int N, K, i;
    printf("Digite o n° de competidores: ");
    scanf("%d", &N); 
    printf("Digite o n° min. de competidores que vão para prox. fase: ");
    scanf("%d", &K);

    int pontos[N]; 

    // ler as pontuações dos competidores
    for (i = 0; i < N; i++) {
        printf("Digite as pontuações de cada competidor: \n");
        scanf("%d", &pontos[i]);
    }

    // ordena as pontuações em ordem crescente
    int chave, j;
    for (i = 1; i < N; i++) {
        chave = pontos[i];
        j = i - 1;

        
        while (j >= 0 && pontos[j] > chave) {
            pontos[j + 1] = pontos[j];
            j = j - 1;
        }
        pontos[j + 1] = chave;
    }

    // encontra a pontuação min. necessária para classificação
    int pontosMin = pontos[N - K];

    // conta quantos competidores têm pontuação igual ou maior a pontuação min.
    int classificados = 0;
    for (i = 0; i < N; i++) {
        if (pontos[i] >= pontosMin) {
            classificados++;
        }
    }

    printf("\nClassificados para próxima fase: %d competidor(es)", classificados);

    return 0;
}
