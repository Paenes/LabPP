/**
* Arquivo: Verificador de palíndromo
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 08/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

char *lerFrase(char *x);
int tamManho(char *vetor);
int verPal(char * y,int tam);

int main(void){
    char *v = calloc(1,sizeof(char));
    v = lerFrase(v);
    int tamMain = tamManho(v); 
    if(verPal(v,tamMain)){
        printf("Palindrono: Verdadeiro");
    }
    else{
        printf("Palindrono: Falso");
    }
    return 0;
}

char *lerFrase(char *x){
    int i;
    char c;
    for(i=0;i<5000;){
        c = getchar();
        if(c>='A' && c<='Z'){
            x[i] = c;
            x= realloc(x,(i+2)*sizeof(char));
            i++;
        }
        else if(c>='a' && c<='z'){
            x[i] = (c-32);
            x= realloc(x,(i+2)*sizeof(char));
            i++;
        }
        if(c == '\n'){
            x[i]='\0';
            break;
        }
    }
    if(i==5000){
        x[5000]='\0';
        while((c=getchar())!='\n'&&c!=EOF); //limpar buffer teclado
    }
    return x;
}

int tamManho(char *vetor){
    int tam = 0;
    while(vetor[tam]){
        tam++;
    }
    return tam;
}

int verPal(char * y,int tam){
    int Pal = 1;
    if((tam%2)==0){
        for(int j=tam;j>(tam/2);j--){
            if(y[tam-j]!=y[j-1]){
                Pal = 0;
            }
        }
    }
    else{
        for(int j=tam;j>((tam+1)/2);j--){
            if(y[tam-j]!=y[j-1]){
                Pal = 0;
            }
        }
    }
    free(y);
    return Pal;
}
