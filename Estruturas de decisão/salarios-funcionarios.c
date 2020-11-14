#include <stdio.h>

void main(){
    int count;
    float salarioBruto, salarioLiquido, soma_salariosBrutos, soma_salariosLiquidos,somaImpostos;

    salarioBruto=salarioLiquido=soma_salariosBrutos=soma_salariosLiquidos=somaImpostos=0.0;
    
    for (count = 1; count <= 3; count++)
    {
        printf("\nInforme o salário bruto do %dº funcionário: \n", count);
        scanf("%f",&salarioBruto);

        if (salarioBruto<=999.00)
        {
            salarioLiquido = salarioBruto-salarioBruto*0.10;
        }
        else
        {
            if (salarioBruto<=1999.00)
            {
                salarioLiquido = salarioBruto-salarioBruto*0.15;
            }
            else
            {
                if (salarioBruto<=9999.00)
                {
                    salarioLiquido = salarioBruto-salarioBruto*0.20;
                }
                else
                {
                    if (salarioBruto<=99999.00)
                    {
                        salarioLiquido = salarioBruto-salarioBruto*0.25;
                    }
                    else
                    {
                        salarioLiquido = salarioBruto-salarioBruto*0.30;
                    }               
                    
                }           
                
            }       
            
        }
        soma_salariosBrutos=soma_salariosBrutos+salarioBruto; 
        soma_salariosLiquidos=soma_salariosLiquidos+salarioLiquido;
    
    }
    
    somaImpostos=soma_salariosBrutos-soma_salariosLiquidos;
    printf("\nA soma dos salários brutos é: R$%.2f", soma_salariosBrutos);
    printf("\nA soma dos salários líquidos é: R$%.2f", soma_salariosLiquidos);
    printf("\nA soma dos ímpostos é: R$%.2f\n", somaImpostos);
}