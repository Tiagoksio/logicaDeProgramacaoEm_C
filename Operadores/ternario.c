//O operador ternário funciona de forma similar ao if...else, sua sintaxe é:
// expressão?casoVerdadeiro:casoFalso;
#include <stdio.h>

int main (void) {
    int numeroInformado;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &numeroInformado);
    
    (numeroInformado%2==0)?printf("O número %d é Par\n", numeroInformado):printf("O número %d é Impar\n", numeroInformado);  

}
