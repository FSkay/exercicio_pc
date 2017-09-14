/*
4.	Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, os tempos registrados em cada volta. 
Fazer um programa em C para ler os tempos das N voltas, calcular e imprimir: 
o	melhor tempo; 
o	a volta em que o melhor tempo ocorreu; 
o	tempo médio das N voltas; 

Aluno: Felipe Menegat
*/

#include <stdio.h> 
#include <stdlib.h> 
#define N 10

int main() { 

float tmedio; 
int tempo[N],mt=-1,st=0; 
int melhorvolta,i; 

for(i=0;i<N;i++) {
 
printf("\ndigite o tempo obtido na %d volta em minutos:\n",i); 
scanf("%d",&tempo[i]); 
if(mt > tempo[i]) { 
mt=tempo[i]; 
melhorvolta=i; 
} 

st=st+tempo[i]; 

} 

tmedio=st/10; 
printf("\no melhor tempo foi %d.\n ",mt); 
printf("\na volta q ocorreu o melhor tempo foi %d volta.\n ",melhorvolta); 
printf("\ntempo medio das 10 voltas: %f\n ",tmedio);
}
