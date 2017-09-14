/*5.	Fazer um programa em C para calcular a soma dos N primeiros múltiplos de um inteiro K, onde N e K são lidos e são números inteiros e positivos. 

Aluno: Felipe Menegat
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
  system("color 0a");
  setlocale(LC_ALL, "");
  int n = 0,k = 0,soma = 0;

  printf("Digite um número inteiro positivo:\n");
  scanf("%d", &k);
  printf("Digite a quantidade de multiplos do número inteiro digitado que deseja somar:\n");
  scanf("%d", &n);

  if(k<=0 || n<=0){
   
    printf("Digite números inteiros positivos\n");
  
  } 
  else {
 
    for(; n>0; n--)
    
	  soma += n*k;
    
	printf("O resultado da soma e : %d\n", soma);
  }

  system("pause");
}
