/**
* Arquivo: Reversor de string
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 08/12/2022
*/

#include <stdio.h>

int lerfrase(char * str, int nchar);
void inverso(char *b,int tam);
void maiusc(char *c,int tam2);

int main(){
    int tamStr;
    char a[1000];
    tamStr = lerfrase(a,1000);
    inverso(a,tamStr);
    maiusc(a,tamStr);
    printf("%s",a);
}

int lerfrase(char * str, int nchar){
    char c;
    int i;
    for(i=0;i<nchar;i++){
        c=getchar();
        if(c!='\n'){
            str[i]=c;
        }
        else{
            str[i]='\0';
            break;
        }
    }
    if(i==nchar){
        str[nchar-1]='\0';
        while((c=getchar())!='\n'&&c!=EOF); //limpar buffer teclado
    }
    return (i-1);
}

void inverso(char *b,int tam){
    char invertido[tam+1];
    for(int j=(tam);j>=0;j--){
        invertido[j] = b[(tam-j)];
    }
    invertido[tam+1]='\0';
    for(int k=0;k<(tam+1);k++){
        b[k]=invertido[k];
    }
}

void maiusc(char *c,int tam2){
    for(int i2=0;i2<=tam2;i2++){
        if((c[i2]>=97) && (c[i2]<=122)){
            c[i2]=(c[i2]-32);
        }
    }
}