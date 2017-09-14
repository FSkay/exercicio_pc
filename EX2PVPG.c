/*2.	Seja N um número quadrado perfeito. Se somarmos os números ímpares consecutivos (1+3+5+7+9+...) até que esta soma seja igual a N, o número M de termos somados será igual a raiz quadrada de N. 
Exemplo: N = 16 16 = 1 + 3 + 5 + 7 M = 4 termos. 
Logo, a raiz quadrada de 16 é 4. 
Fazer um programa em C para ler um número inteiro e positivo N e responder se N é quadrado perfeito. 

Aluno: Felipe Menegat
*/

#include <stdio.h> /* biblioteca padrão para entrada e saída de dados */

void main()

	int numero, termos, soma;


	do {

		printf("\nInforme um numero: ");
		scanf("%d", &numero); 
	

		for(termos=1, soma=0; soma<numero; termos++) 
		{
			soma = ( termos * (2+(termos-1)*2) )/2; 
	
			
		}

	

		if(numero >= 0) {

			if (soma == numero) 
				printf("%d : E um quadrado perfeito! Possui raiz quadrada = %d\n", numero, termos-1);
			
			
			else 
				printf("%d : Nao e quadrado perfeito!\n", numero);
			
		}

	} while (numero>=0); //Só sai do programa se o número for negativo

} 
