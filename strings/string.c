//string é um vetor de caracteres que possui um finalizador, o "\0", que indica que a string foi finalizada
#include<stdio.h>
#include<string.h>

void main(){
    int contador;
    char nome_cliente2[7]="Fulano"; //6 posições úteis + 1 posição para o finalizador
    char nome_cliente[]= "Fulano";//6 posições úteis + 1 posição para o finalizador identificadas automaticamente

    for (contador = 0; contador < 6; contador++)
    {
        printf("Posição %d = '%c'\n", contador, nome_cliente[contador]);
    }
    printf("\n\n");
    
    //Se atribuirmos o finalizador no meio da string para parar a leitura do vetor
    nome_cliente[3]= '\0';

    for (contador = 0; nome_cliente[contador]!='\0'; contador++)
    {
        printf("Posição %d = '%c'\n", contador, nome_cliente[contador]);
    }

    
    //para verificar a quantidade de caracteres de uma string, podemos utilizar a função strlen(); da biblioteca string.h
    //Como foi atribuído o finalizador na posição 3, o strlen contará até o mesmo retornando o valor 3;
    printf("\nQuantidade de caracteres da string usando strlen: %d\n", strlen(nome_cliente));
    //Ja na outra variável, a função fará a leitura de toda a string, da posição 0 até o finalizador, resultando 6 caracteres
    printf("\nQuantidade de caracteres da string usando strlen: %d\n", strlen(nome_cliente2));
    

}	    
    
    