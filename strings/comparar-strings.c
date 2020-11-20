/*A função 'strcmp(string1, string2)' retorna um número inteiro após comparar 2 strings.
  0: conteúdo das strings é igual
< 0: conteúdo da string1 é menor do que a string2
> 0: conteúdo da string1 é maior do que a string2
*/

#include <stdio.h>
#include <strings.h>

void main (){
    
    char string1[]="abc";
    char string2[]="ade";
    int retorno;

    retorno = strcmp(string1, string2);

    printf("%d\n", retorno);   
// A função 'strncmp(string1, string2,qnt_caracteres)' compara uma parte da string

    retorno = strncmp(string1,string2,1);
    printf("%d\n", retorno);
}
   

