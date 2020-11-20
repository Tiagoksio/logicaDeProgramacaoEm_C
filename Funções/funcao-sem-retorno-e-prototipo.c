//Podemos utilizar funções sem retorno quando não há necessidade de parâmetros, como para cabeçalhos

#include <stdio.h>

void cabecalho (void){
    printf("--------------------------------------\n");
    printf("--------------- INICIO ---------------\n");
    printf("--------------------------------------\n");
}
//Outra forma de declarar a função, é declarando apenas o cabaçalho como protótipo antes da função main e a função completa com o corpo depois da main;
void rodape(void);//protótipo

void main () {
    cabecalho();// Basta fazer a chamada simples    
    printf("\n              programa\n\n");
    rodape();

}

void rodape(void){
    printf("-----------------------------------\n");
    printf("--------------- FIM ---------------\n");
    printf("-----------------------------------\n");
}
