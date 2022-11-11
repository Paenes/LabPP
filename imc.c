/**
* Arquivo: IMC
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

float imc(float altura, float peso){
    float indice = (peso/(altura*altura));
    return indice;
}

char * classificacao(float indice){
    if(indice < 16){
        return "Perigo de vida";
    }
    else if(indice < 17){
        return "Muito abaixo do peso";
    }
    else if(indice < 18.5){
        return "Abaixo do peso";
    }
    else if(indice < 25){
        return "Peso normal";
    }
    else if(indice < 30){
        return "Acima do peso";
    }
    else if(indice < 35){
        return "Obesidade grau I";
    }
    else if(indice < 40){
        return "Obesidade grau II";
    }
    else{
        return "Obesidade grau III";
    }

}

int main(void){
    int p1;
    float a1,i1;
    printf("Digite seu peso, em kg:\n");
    scanf("%d", &p1);
    printf("Digite sua altura, em metros:\n");
    scanf("%f", &a1);
    i1 = imc(a1,p1);
    printf("%.2f (%s)",i1, classificacao(i1));
    return 0;
}