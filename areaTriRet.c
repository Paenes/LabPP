/**
* Arquivo: Área do triângulo retângulo a partir dos vértices
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 24/11/2022
*/

#include <stdio.h>
#include <stdlib.h>

float areatri(float A1, float B1, float A2, float B2);

int main(void){
    float xA,xB,yA,yB;
    scanf("%f %f %f %f", &xA, &yA, &xB, &yB);
    float resultado = areatri(xA,yA,xB,yB);
    int x = resultado;
    if((resultado-x)==0){
        printf("%g",resultado);
    }
    else{
        printf("%f", resultado);
    }
    return 0;
}

float areatri(float A1, float A2, float B1, float B2){
    float area;
    //printf("%f %f %f %f", A1, B1, A2, B2);
    area = (((B1-A1)*(B2-A2))/2);
    return area;
}