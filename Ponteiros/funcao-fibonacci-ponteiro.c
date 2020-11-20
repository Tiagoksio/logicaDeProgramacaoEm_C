#include <stdio.h>

void fibonacci(int *ptrNumA, int *ptrNumB);

void main(){
    int numA, numB, contador;
        
    numA = 0;
    numB = 1;
    
    printf("Informe quantos números da sequência fibonacci deseja saber:");
    scanf("%d", &contador);

    for(contador; contador>0; contador--){
        printf("%d ", numA);
        fibonacci(&numA, &numB);    
    }
    
}

void fibonacci(int *ptrNumA, int *ptrNumB){
    int somaAB; 
    
    somaAB = *ptrNumA +*ptrNumB;
    *ptrNumB = *ptrNumA;
    *ptrNumA = somaAB;
    return;
}
