#include <stdio.h>
#include <stdlib.h>

void main(){
    char letra;
    int countA, countE, countI, countO, countU, casos;
    
    countA=countE=countI=countO=countU=0;

    printf("Digite uma letra minúscula (a..z) a cada linha e tecle 'ENTER' para continuar ou '.' para finalizar: \n");
    scanf("%c",&letra);
    while (letra!='.')
    {
        switch(letra)       
        {
            case 'a':
                countA++;
                break;
            case 'e':
                countE++;
                break;
            case 'i':
                countI++;
                break;
            case 'o':
                countO++;
                break;
            case 'u':
                countU++;
                break;       
            default:            
                break;
            }       
    
        scanf("%c",&letra);
    }
    printf("\nQuantidade de 'a' é %d \n", countA);
    printf("\nQuantidade de 'e' é %d \n", countE);
    printf("\nQuantidade de 'i' é %d \n", countI);
    printf("\nQuantidade de 'o' é %d \n", countO);
    printf("\nQuantidade de 'u' é %d \n", countU);
}
