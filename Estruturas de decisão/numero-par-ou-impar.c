#include <stdio.h>

void main(){
    int numero;
    int parOuImpar;
    
    printf("Informe um número inteiro: \n");
    scanf("%d",&numero);

    parOuImpar = numero%2;

    switch (parOuImpar)
    {
    case 1:
        printf ("\nO número %d é ímpar\n", numero);
        break;
    default:
        printf ("\nO número %d é par\n", numero);
        break;
    }


}