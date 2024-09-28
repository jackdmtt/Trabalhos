 #include <stdio.h>
 int main(){
     int a[10], chave, i;
     for(int j = 0; j < 10; j++){
         printf("Insira o valor %i:", j+1);
         scanf("%i", &a[j]);
         chave = a[j];
         i = j - 1;
         while(i > -1 && a[i] > chave){
             a[i + 1] = a[i];
             i -= 1;
         }
         a[i + 1] = chave;
     }
     for(int w = 0; w < 10; w++){
         printf("%i ", a[w]);
     }
 }
