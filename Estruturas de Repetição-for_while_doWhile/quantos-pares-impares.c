#include <stdio.h>

void main(){
    int numList, count, somaPares,somaImpares;

    printf("\nInforme quantos números deseja listar: \n");
    scanf("%d", &numList);

    somaImpares = somaPares = 0;

    for (count=1; count<=n; count++)
    {
        printf("\n%d\n",count);
        if (count%2 == 0)
        {
            somaPares = somaPares+count;
        }
        else
        {
            somaImpares = somaImpares+count;
        }
                
    }
    printf("\nA soma dos números pares é %d e a dos impares é %d \n", somaPares, somaImpares);
    
}
