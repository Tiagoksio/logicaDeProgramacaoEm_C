#include <stdio.h>

void main(){
    int num, count, maior;
        
    count= 1;
    maior= 0;
        
    do
    {
        printf ("Digite um número inteiro positivo: ");
        scanf("%d", &num);

        if (num>=0)
        {
            printf ("\nO número %dº lido foi = %d\n", count,num);   
            count++;            
            if (num>maior)
            {
                maior=num;
            }            
        }
        else
        {            
            printf("\no Número precisa ser positivo. Tente novamente\n");            
        }
    } while (count<=5);        
    printf("\nO maior número informado foi:%d\n", maior);
}