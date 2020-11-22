#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int sorteio[8], i;

    srand(time(NULL));
    for (i = 0; i <= 7; i++)
    {
        sorteio[i] = rand() % 7;
       
        printf("%d - ", sorteio[i]);        
    } 
    
}
