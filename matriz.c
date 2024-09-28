#include <stdio.h>

#define max_lin 7
#define max_col 7

int lin1, col1, lin2, col2;
int matriz_1[max_lin][max_col];
int matriz_2[max_lin][max_col];
int result[max_lin][max_col];
int termo;

void solicita_matriz(int matriz[max_lin][max_col], int lin, int col, const char *nome_matriz)
{
  printf("\nDigite os termos da matriz %s:\n", nome_matriz);
  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("Digite o termo [%d][%d] da matriz %s: ", i, j, nome_matriz);
      scanf("%d", &termo);
      matriz[i][j] = termo;
    }
  }
}

void imprime_matriz(int matriz[max_lin][max_col], int lin, int col)
{
  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void multiplica_matrizes(int matriz_1[max_lin][max_col],
                         int matriz_2[max_lin][max_col],
                         int resultado[max_lin][max_col], int lin1, int col1,
                         int col2)
{
  for (int i = 0; i < lin1; i++)
  {
    for (int j = 0; j < col2; j++)
    {
      resultado[i][j] = 0;
      for (int k = 0; k < col1; k++)
      {
        resultado[i][j] += matriz_1[i][k] * matriz_2[k][j];
      }
    }
  }
}

int main(void)
{
  while (1)
  {
    printf("Digite o número de linhas da 1º matriz: ");
    scanf("%d", &lin1);
    printf("Digite o número de colunas da 1º matriz: ");
    scanf("%d", &col1);

    printf("\nDigite o número de linhas da 2º matriz: ");
    scanf("%d", &lin2);
    printf("Digite o número de colunas da 2º matriz: ");
    scanf("%d", &col2);

    if (col1 != lin2)
    {
      printf("\nNão é possível multiplicar as matrizes!\n");
      printf("Digite novamente os tamanhos das matrizes (n° de colunas da matriz 1 = n° de linhas da matriz 2).\n\n");
    }
    else
    {
      break;
    }
  }

  solicita_matriz(matriz_1, lin1, col1, "1");
  solicita_matriz(matriz_2, lin2, col2, "2");

  printf("\nMatriz 1:\n");
  imprime_matriz(matriz_1, lin1, col1);

  printf("\nMatriz 2:\n");
  imprime_matriz(matriz_2, lin2, col2);

  multiplica_matrizes(matriz_1, matriz_2, result, lin1, col1, col2);

  printf("\nProduto da multiplicação das matrizes:\n");
  imprime_matriz(result, lin1, col2);

  return 0;
}