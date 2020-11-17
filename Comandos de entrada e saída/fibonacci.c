#include <stdio.h>

void main (){

    int somaAB, numA, numB, count, qntNumFibonacci;
        
    count = 0;    
    somaAB = 0;
    numA = 0;
    numB = 1;
    
    printf("Informe quantos números da sequência fibonacci deseja saber: ");
    scanf("%d", &qntNumFibonacci);

    for (count = 0; count < qntNumFibonacci; count++)
    {
        printf("%d ", numA);
        somaAB = numA + numB;
        numB = numA;
        numA = somaAB;
    }    
    
}