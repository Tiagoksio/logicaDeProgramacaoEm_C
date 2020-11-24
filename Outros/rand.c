//Funções srand e rand utilizadas para gerar números aleatórios 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Necessária para a geração da semente e garantia da aleatoriedade 

void main(){
    int sorteio[8], i;

    srand(time(NULL)); // atribuir valor nulo ao relógio para geração da semente.
    for (i = 0; i <= 7; i++)
    {
        sorteio[i] = rand() % 7; // o % 7 especifica o range de possibilidades que podem ser geradas, no caso, de '0' a '7'
       
        printf("%d - ", sorteio[i]);        
    } 
    
}
