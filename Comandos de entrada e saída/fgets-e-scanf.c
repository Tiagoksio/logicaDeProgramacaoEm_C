#include <stdio.h>

void main (){
    
    char nome[20];
    
    //A função 'fgets' resolve o problema do espaço por conta dos seguintes parâmetros:
    //(string_a_ser_lida, numero_de_caracteres_a_serem_lidos_da_string,origem_da_entrada)
    //stdin = entrada padrão, teclado.
    printf("Digite seu nome e sobrenome: ");
    fgets(nome,20,stdin);
    printf("%s", nome);
    
    //A função 'scanf' faz a leitura dos dados até encontrar um espaço,
    //assim não armazena o sobrenome
    printf("Digite seu nome e sobrenome: ");
    scanf("%s", nome);
    printf("%s\n", nome);
    
}
   
