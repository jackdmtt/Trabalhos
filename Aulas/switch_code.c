#include <stdio.h>

int main(void) {
  int opcao, a, b, c;

  // do {
    
  printf("Escolha uma opcao:\n"
    "1 - Mostra os números em ordem crescente\n"
    "2 - Mostra os números em ordem decrescente\n"
    "3 - Mostra os números múltiplos de 2\n");
  scanf("%d", &opcao); 
  //   } while (opcao < 1 || opcao > 3){
  //     printf("Opção inválida. Digite novamente.\n");
  //   }

  
  printf("Digite o primeiro número: \n");
  scanf("%d", &a);

  printf("Digite o segundo número: \n");
  scanf("%d", &b);

  printf("Digite o terceiro número: \n");
  scanf("%d", &c);

  switch (opcao)
  {
  case 1:
    if(a < b && a < c) {
         if(b < c){
           printf("%d, %d, %d", a, b, c);
           break;
         }
       } 
  
    
  case 2:
    if(a < b && a < c) {
       if(b < c){
         printf("%d, %d, %d", c,b,a);
       }
     }
    break;
    case 3:
      if(a%2==0){
        printf("É múltiplo de 2: %d\n\n", a);
        } else{
          printf("Não é múltiplo de 2: %d\n\n",a);
        }

      if(b%2==0){
      printf("É múltiplo de 2: %d\n\n", b);
      } else{
        printf("Não é múltiplo de 2: %d\n\n",b);
      }

      if(c%2==0){
      printf("É múltiplo de 2: %d\n\n", c);
      } else{
        printf("Não é múltiplo de 2: %d\n\n",c);
      }
      break;

    default:
    printf
    ("Opção inválida\n");
    break;
}
  return 0;
}
