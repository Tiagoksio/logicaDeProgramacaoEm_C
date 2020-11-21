//Alocação dinâmica de vetores
//A alocação dinâmica é utilizada para alocação da memória durante o tempo de exercução;(runtime)
//A alocação estática é utilizada para alocação da memória durante o tempo de compilação;(compile time)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr; //criação do ponteiro para o vetor
    int contador, qntElementosVetor;

    //receber a quantidade de elementos
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &qntElementosVetor);

    //alocando a memória para o vetor de acordo com a quantidade de elementos do vetor;
    
    ptr = (int *)(malloc(qntElementosVetor * sizeof(int)));
    /*
    1 - Preciso saber a quantidade de elementos;
    2 - Saber quanto de memória cada elemento possui através da sizeof;
    3 - Multiplicar a quantidade de elementos pelo tamanho do elemento;
    4 - Fazer a alocação dos bytes através da malloc - memory alloc;
    5 - Como a malloc retorna um tipo void, é preciso converter para o tipo desejado com (tipo *);
    6 - Atribuir à variável ponteiro;
    */
    if(ptr == NULL)
    {
        printf("\nERRO DE ALOCAÇÃO DE MEMÓRIA!");
        return 0;
    }
    printf("\n");

    //Receber dados no vetor;

    for(contador = 0; contador < qntElementosVetor; contador++)
    {
        printf("Valor armazenado no elemento de indice [%d] = %d\n", contador, ptr[contador]);
    }   
    printf("\n");

    //Para liberar a memória que foi alocada, usa-se a função free(), 
    //pois o block de memória alocado dinâmicamente não é liberado automaticamente como as alocações estáticas;
    free(ptr);

    return 0;
}

