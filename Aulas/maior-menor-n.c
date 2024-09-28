#include <stdio.h>
int main(void) {
  int num1, num2, num3;
  printf("Digite o primeiro numero inteiro:\n");
  scanf("%d", &num1);
  printf("Digite o segundo numero inteiro:\n");
  scanf("%d", &num2);
  printf("Digite o terceiro numero inteiro:\n");
  scanf("%d", &num3);
  if (num1 >= num2 && num1 >= num3) {
    printf("%d é o maior numero.\n", num1);
  } else if (num2 >= num1 && num2 >= num3) {
    printf("%d é o maior numero.\n", num2);
  } else {
    printf("%d é o maior numero.\n", num3);
  }
  if (num1 <= num2 && num1 <= num3) {
    printf("%d é o menor numero.\n", num1);
  } else if (num2 <= num1 && num2 <= num3) {
    printf("%d é o menor numero.\n", num2);
  } else {
    printf("%d é o menor numero.\n", num3);
  }
  return 0;
}