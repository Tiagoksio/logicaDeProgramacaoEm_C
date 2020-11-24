#include <stdio.h>
#include <string.h>

void main (){
    //A string de destino precisa ter espaço para comportar a concatenação
    char saudacao[13]="Olá, ";
    char nome[10];
    char tratamento[13]= "Sr(a), "; 
       
    printf("Qual o seu nome? ");
    fgets(nome,11,stdin);
    
    //'strcat(string_destino, string_origem)' nos permite concatenar strings
    strcat(saudacao,nome);
    printf("%s\n", saudacao);  

    //'strncat(string_destino, string_origem,qnt_caracteres)' nos permite concatenar uma quantidade de caracteres
    strncat(tratamento, nome,1);
    printf("%s\n", tratamento);
}
   