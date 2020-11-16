#include <stdio.h>

void main(){
    float notas[5], soma, media;
    int posicao;

    for (posicao = 0; posicao < 5; posicao++)
    {
        printf("\nInforme a %dª nota: ", posicao+1);
        scanf("%f", &notas[posicao]);
        soma=soma+notas[posicao];
    }
    media = soma/20;
    printf("\nA média é: %.2f", media);

    for (posicao = 0; posicao < 20; posicao++)
    {
        if (notas[posicao] >= media)
        {
            printf("\nA nota %.2f está igual/acima da média\n", notas[posicao]);
        }

    }   
    
}