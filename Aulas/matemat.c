#include "stdio.h"
int main(void) {

  float a,b,c,d;

  printf("Digite um numero a:\n");
  scanf("%f", &a);

  printf("Digite um numero b:\n");
  scanf("%f", &b);

  printf("Digite um numero c:\n");
  scanf("%f", &c);

  printf("Digite um numero d:\n");
  scanf("%f", &d);

  printf("A soma de a e c é: %f\n", a + c);
  printf("A multiplicacao de b e d é: %f\n", b * d);


  if(a + c>b * d)
    printf( "A soma de a e c é maior que a multiplicacao de b e d");
  else
    printf("A multiplicacao de b e d é maior que a soma de a e c");


  return 0;
  }