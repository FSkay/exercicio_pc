
/*3.	Fazer um programa em C para ler o raio R de uma esfera e calcular o volume e a área de uma esfera.
Aluno: Felipe Menegat
*/ 

#include <stdio.h>
#define PI 3.1415

float esf(float raio){
    float volume;
    volume = (4.0/3) * PI * raio * raio * raio;
    return volume;
}

int main(){
    float raio;
    printf("Digite o valor do raio:");
    scanf("%f",&raio);

    printf("o volume e: %.2f", esf(raio));
    return(0);
}
