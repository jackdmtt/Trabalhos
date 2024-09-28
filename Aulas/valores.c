#include "stdio.h"
int main(void) {

  float a,b;

  printf("Digite um numero A:\n");
  scanf("%f", &a);

  printf("Digite um numero B:\n");
  scanf("%f", &b);

  if(a>20){
    printf("O valor de A é: %.1f", a+8);
  } else{
  printf("O valor de A é: %.1f", a);
  }
  if(b<20){
    printf("O valor de B é: %.1f", b-5);
  } else{
  printf("O valor de B é: %.1f", b);
  }
  return 0;
  }
