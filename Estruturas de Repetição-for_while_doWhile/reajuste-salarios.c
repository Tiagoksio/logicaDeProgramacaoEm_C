#include <stdio.h>

void main(){
    int cont, contador;
    float porcentagem_reajuste, salario, salario_reajustado, maiorSalarioReajustado;

    printf("\nInforme o valor percentual do reajuste: \n");
    scanf("%f", &porcentagem_reajuste);

    if (porcentagem_reajuste>1.0)
    {
        porcentagem_reajuste = porcentagem_reajuste/100;
    }
    
    contador = 1;
    maiorSalarioReajustado=0.0;
    for (cont=1; cont<= 3; cont++)
    {
        printf("\nInforme o salário atual do %dº funcionário: \n", contador);
        scanf("%f", &salario);
        
        salario_reajustado = salario+(salario*porcentagem_reajuste);
        printf("\nO salário reajustado do %dº funcionaior é %.2f\n", contador, salario_reajustado);
        
        if (maiorSalarioReajustado<salario_reajustado)
        {
            maiorSalarioReajustado = salario_reajustado;
        }
        contador++;
        
    }
    
    printf("\nO maior salário reajustador foi o valor de %.2f\n", maiorSalarioReajustado);

}