#include <stdio.h>

void main (){
    
    char nome[20];
    
    printf("Digite seu nome: ");
    fgets(nome,20,stdin);

    printf("%s", nome);
}
   
