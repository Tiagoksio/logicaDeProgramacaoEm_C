#include <stdio.h>

void main(){
    int cont, contador;
    float salarioFuncionario, maiorSalario, mediaSalarial;
    
    maiorSalario = 0.0;
    contador = 1;
    for (cont = 1; cont<=10; cont++)
    {
        printf("\nInforme o valor do %dª salário: \n", contador);
        scanf("%f", &salarioFuncionario);
        contador++;
        mediaSalarial = mediaSalarial + salarioFuncionario; 
        
        if (salarioFuncionario>maiorSalario)
        {
            maiorSalario = salarioFuncionario;
        }        
    }

    printf ("\nO maior salário da empresa é %.2f\n", maiorSalario);
    printf ("\nA média salarial da empresa é %.2f\n", mediaSalarial/10);
    
}