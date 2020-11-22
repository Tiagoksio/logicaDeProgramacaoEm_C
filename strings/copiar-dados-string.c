/*Para atribuir um valor a uma string, deve-se fazê-lo durante a delcaração
Não é possível fazer a atribuição do valor da string no meio do programa

char nome[]="fulano de tal"; 
nome ="Fulano de tal";*/

#include <stdio.h>
#include <string.h>

void main (){
   
    char nome1[15]="Fulano de Tal";//Jeito correto de declarar 
    char nome2[15];
    char nome3[15];   
   
    printf("%s\n", nome1);

    //A função 'strcpy()' da biblioteca 'string.h' nos permite fazer a atribuição
    //strcpy(string_destino, string_origem)

    strcpy(nome1, "Siclano de Tal");
    printf("%s\n", nome1);

    printf("Digite seu nome e sobrenome:\n");
    fgets(nome1,15,stdin);

    strcpy(nome2,nome1);
    
    printf("%s\n", nome2);
    //A função 'strncpy()' nos permite copiar uma quantidade declarada de caracteres
    //strncpy(string_destino, string_origem, qnt_de_caracteres);
    strncpy(nome3,nome2,5);
    printf("%s\n", nome3);

}
   