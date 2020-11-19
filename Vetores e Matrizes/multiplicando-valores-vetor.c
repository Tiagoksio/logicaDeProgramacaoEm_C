/* Exercício:
Criar um vetor denominado A com 10 posições do tipo int, preencher o vetor recebendo dados
via teclado e multiplicar o conteúdo de cada elemento do vetor A por 10 armazenando o resultado desta 
multiplicação em outro vetor denominado B.
*/
#include<stdio.h>

void  main (){
    int vetorA [10], vetorB[10], contador;

    for (contador = 0; contador <= 9; contador++)
    {
        printf("Informe o %dº número inteiro:\n", contador+1);
        scanf("%d", &vetorA[contador]);
    }
    printf("\n\n");
    for (contador = 0; contador <= 9; contador++)
    {
        vetorB[contador] = vetorA[contador]*10;
        printf("O número %d multiplicado por 10 = %d:\n", vetorA[contador], vetorB[contador]);
            
    }
}