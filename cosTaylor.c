/**
* Arquivo: Série de Taylor Truncada
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

int fatorial(int i0){
    if(i0 == 0){
        return 1;
    }
    else{
        return i0*fatorial(i0-1);
    }
}

float costaylor(int i1, float a1){
    float soma,c,pi = 3.14159;
    for(c=0;c<=i1;c++){
        soma += (pow(-1.0,c))*((pow((a1*pi),(2.0*c)))/fatorial(2.0*c));
    }
    return soma;
}

int main(void){
    int i;
    float a;
    printf("Digite o nº de eventos e o fator da função cosTaylor:");
    scanf("%d %f", &i, &a);
    printf("%.5f", costaylor(i,a));
    return 0;
}