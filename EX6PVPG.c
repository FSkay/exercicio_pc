/*6.	Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que imprima todos os elementos comuns aos dois vetores. 

Aluno: Felipe Menegat 
*/


#include <stdio.h>
#include <conio.h>

main(void){
  int i,j,p;
  int veta[5];
   int vetb[5];
    int vetc[5];

  printf("\nVoce, entre com os elementos do vetor.\n\n");
  for (i=0; i<5; i++)
  {

   printf("Entre com o %d elemento do vetor 1: " ,i+1);
   scanf("%i",&veta[i]);
      
   printf("Entre com o %d elemento do vetor 2: ",i+1);
   scanf("%d",&vetb[i]);
 
  }

   for (p=0; p<5; p++)
  {
   vetc[p]=veta[p]+vetb[p];
   printf("\n a soma para elemento %d foi: %d \n", p+1, vetc[p]);

   }
scanf("%i",&p);
  }
