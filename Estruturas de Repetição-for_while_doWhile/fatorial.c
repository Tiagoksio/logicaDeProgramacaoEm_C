# include <stdio.h>

void main(){
    int numero, fatorial, count;
    
    printf("Informe o número que deseja calcular o fatorial: ");
    scanf("%d", &numero);


    fatorial = numero;

    for (count = numero-1; count > 1; count--)
    {
        fatorial *= count;
    }
    
    printf("%d! = %d\n", numero, fatorial);

}