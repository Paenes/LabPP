/**
* Arquivo: Contador de caracteres
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 08/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

void lerFrase(char *x);
void contaOsTrem(char *z,int j);

int main(void){
    char *v = calloc(1,sizeof(char));
    lerFrase(v);
}

void lerFrase(char *x){
    int i;
    char c;
    for(i=0;i<=5000;i++){
        c = getchar();
        if(c != '\n'){
            x[i]= c;
            x = realloc(x,((i+2)*sizeof(char)));
        }
        else{
            x[i]='\0';
            break;
        }
    }
    if(i==5000){
        x[5000]='\0';
        while((c=getchar())!='\n'&&c!=EOF); //limpar buffer teclado
    }
    contaOsTrem(x,i);
    free(x);
}

void contaOsTrem(char *z,int j){
    int letras = 0, digitos = 0,outros = 0;
    for(j=j-1;j>=0;j--){
        if(z[j]>='A' && z[j]<='Z' || z[j]>='a' && z[j]<='z'){
            letras++;
        }
        else if(z[j]>='0'&&z[j]<='9'){
            digitos++;
        }
        else if(z[j]=='\n'){
            break;
        }
        else{
            outros++;
        }
    }
    printf("letras: %d\ndígitos: %d\noutros: %d",letras,digitos,outros);
}