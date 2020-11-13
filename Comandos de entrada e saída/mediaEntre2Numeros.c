#include <stdio.h>

int main()
{
    float num01 = 0.0;
    float num02 = 0.0;
    float media = 0.0;

    printf("--------Média entre 2 números--------\n");
    
    printf("\nInforme o 1º número: ");
    scanf("%f", &num01);
    
    printf("\nInforme o 2º número: ");
    scanf("%f", &num02);

    media = (num01 + num02)/2;

    printf("\nA média entre %0.2f e %0.2f é %0.2f.\n", num01, num02, media);
    return 0;
}
