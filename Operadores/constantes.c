//constantes são espaços da memória alocados imutavelmente.
#include<stdio.h>
#define POUPANCA 0.05 //Podem ser declaradas através do define.

void main(){
    float depositoInicial, saldoFinal;
    const float IMPOSTO = 0.15; // Podem ser declaradas através do const

    printf("Informe o valor do depósito inicial:");
    scanf("%f", &depositoInicial);

    saldoFinal = depositoInicial+depositoInicial*POUPANCA;
    saldoFinal -= saldoFinal*IMPOSTO;
    printf("Seu saldo após um ano será de %.2f", saldoFinal);

}

