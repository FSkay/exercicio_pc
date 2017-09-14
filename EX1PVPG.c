/*1.	Fazer um programa ler um vetor de inteiros e positivos e imprimir quantas vezes aparece o número 1, 3 e 5. 
 * O vetor terá no máximo 20 posições. 
 * Sair do programa quando for digitado -1. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
int num[20];
int cont=0, i;

printf("Se voce digitar -1 saira do programa.\n\n");

 for(i=0; i<20; i++) {
     printf("Entre com um numero: ");
        scanf("%d", &num[i]);
        if(num[i]==-1) {
          return -1; 
      } 
    }
  
    for(i=0; i<20; i++) {
        if(num[i]==1 && num[i+1] == 3 && num[i+2]==5) {
         cont= cont+1;
        }
    }  
    printf("Os numeros 1,3,5 aparece nessa ordem %d vezes!\n", cont);

system("PAUSE");
return -1;

}
