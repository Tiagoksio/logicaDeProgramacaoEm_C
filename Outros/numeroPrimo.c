//Algoritmo para verificar se um determinado número é primo ou não;
#include <stdio.h>

int main(){
    int numero, divisores, primo = 0;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    for (divisores = 1; divisores <= numero ; divisores++)
    {
        if (numero%divisores==0)
        {
            primo++;
        }    
        
    }
    
    if (primo==2)
    {
        printf("O número %d é primo.\n", numero);
    }
    else
    {
        printf("O número %d é não primo.\n", numero);
    }

    return 0;
}