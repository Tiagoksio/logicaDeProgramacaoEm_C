#include <stdio.h>

int main () {
  
    float peso, altura, imc;
  
    printf ("Digite seu peso: ");
    scanf ("%f", &peso);
    printf ("Digite sua altura: ");
    scanf ("%f", &altura);

    imc = peso/(altura*altura);
   
    printf ("Seu imc é: %0.2f\n", imc);    
     // o 0.2 entre o % e o f para exibir apenas 2 casas decimais.
    
    return 0;
}
