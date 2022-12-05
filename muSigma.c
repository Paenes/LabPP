/**
* Arquivo: Produto dos números dados
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 01/12/2022
*/

#include <stdio.h>
#include <math.h>

float media(int tam1, float * vetor1);
float desvio(int tam2, float med, float * vetor2);

int main(void){
    int i, qtd;
    scanf("%d",&qtd);
    float a[qtd];
    for(i=0;i<qtd;i++){
        scanf("%f",a+i);
    }
    float mediat = media(qtd,a);
    printf("média %g, ",mediat);
    printf("desvio %g",desvio(qtd,mediat,a));
    return 0;
}

float media(int tam1, float * vetor1){
    float total;
    for(int j=0;j<tam1;j++){
        total += vetor1[j];
    }
    total /= tam1;
    return total;
}

float desvio(int tam2, float med, float * vetor2){
    float desv;
    for(int k=0;k<tam2;k++){
        desv += pow((vetor2[k]-med),2);
    }
    desv /= tam2;
    desv = pow(desv,0.5);
    return desv;
}