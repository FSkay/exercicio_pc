/*7.Faça um programa que determina o máximo e o mínimo de um conjunto de n números inteiros armazenados 
 num vetor A de 10 elementos. 

Aluno: Felipe Menegat
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
int vet[10],menor,maior=0;

for (int i = 0; i < 10; ++i) {
    printf("Digite o elemento %d\n",i+1);
    scanf("%d",&vet[i]);
}

menor = vet[0];
for (int i = 0; i < 10; ++i) {
  if (vet[i]>maior) maior=vet[i];
  if (vet[i]<menor) menor=vet[i];
}

printf("O menor numero=%d\nO maior numero=%d\n",menor,maior);


system("pause");

}

