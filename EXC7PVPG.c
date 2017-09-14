/*7.Faça um programa que determina o máximo e o mínimo de um conjunto de n números inteiros armazenados 
 num vetor A de 10 elementos. 

Aluno: Felipe Menegat
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int f[10];
int d ;
int maximo ;
maximo = 0 ;
int minimo ;
	
	for(d=0; d<10; d++){
		printf("Digite o valor de d [%d]: ",d+1);
		fflush(stdin);
		scanf("%d",&f);
		
		if(f>maximo){
		maximo=f;
		}
		
		if(f<f(d-1)){
		minimo=f;
		}
	}
printf("Maximo e:%d\n",maximo);
printf("Minimo e:%d\n",minimo);
system("PAUSE");
return 0;
}


