/**
* Arquivo: Distância Euclidiana entre dois pontos
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 24/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

float distancia(float a1, float a2, float a3, float a4);

int main(void){
    float xA, xB, yA, yB;
    scanf("%f %f %f %f", &xA, &xB, &yA, &yB);
    printf("%g ",distancia(xA,xB,yA,yB));
    return 0;
}

float distancia(float a1, float a2, float a3, float a4){
    float dist;
    dist = pow((((a3-a1)*(a3-a1))+((a4-a2)*(a4-a2))),0.5);
    return dist;
}