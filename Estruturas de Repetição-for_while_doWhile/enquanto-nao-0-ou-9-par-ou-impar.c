// Verifica os números digitados. Se par, mostra seu sucessor. Se impar, seu antecessor. Finaliza se digitar 0 ou 9
#include <stdio.h>

void main(){
    int num, count;
    
    count= 1;    
    do
    {
        printf ("\nDigite um número inteiro: \n");
        scanf("%d", &num);

        if (num%2 == 0)
        {
            printf ("\nO número %dº lido foi = %d. Ele é par e seu sucessor é %d\n", count,num,num+1);   
                       
        }
        else
        {            
            printf("\nO número %dº lido foi = %d. Ele é ímpar e seu antecessor é %d\n", count,num,num-1);            
        }
        count++;
    } while (num!=0 && num!=9);        
    
}
