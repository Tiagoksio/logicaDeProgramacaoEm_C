//Algoritmo para cálculo de IMC
#include <stdio.h>

int main(){
    float massa, altura, imc;    
    
    printf("Informe a massa(kg): ");
    scanf("%f", &massa);
    printf("Informe a altura(m): ");
    scanf("%f", &altura);

    imc = massa/(altura*altura);
    
    if (imc<18.5)
    {
        printf("IMC = %.2f, Você está abaixo do peso!\n", imc);
    }
    else
    {
        if (imc<25)
        {
        printf("IMC = %.2f, Você está com o peso ideal!\n", imc);
        }
        else
        {
            if (imc<30)
            { 
            printf("IMC = %.2f, Você está com sobrepeso!\n", imc);
            }
            else
            {
                
                if (imc<35)
                {
                printf("IMC = %.2f, Você está com obesidade!\n", imc);
                }
                else
                {

                    if (imc<40)
                    {
                    printf("IMC = %.2f, Você está com obesidade severa!\n", imc);
                    }
                    else
                    {
                        printf("IMC = %.2f, Você está com obesidade morbida!\n", imc);
                    }                    
                
                }
            
            }
        
        }
    
    }
 
    return 0;
}