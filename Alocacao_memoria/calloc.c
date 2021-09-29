/*
    malloc aloca a memória, porém não lida com o lixo na memória;
    calloc efetua a alocação utilizando os parâmetros que apontam quantos espaços queremos alocar e o tamanho dos espaços, também inicializando o valor em "0", limpando o lixo na memória;
*/
# include <stdio.h>
# include <stdlib.h>

int main(void) {
    int i;

    int *ptr_x;
    int *ptr_y;
    ptr_x = (int *) calloc(5, sizeof(int));
    ptr_y = (int *) malloc(5 * sizeof(int));
    
    // imprindo dados alocados
    ptr_x[1] = 5;
    *(ptr_x + 2) = 3;
    printf("%i - %i\n", *(ptr_x + 1), ptr_x[2]);

    //analizando a memória alocada
    
    for (i = 0; i < 5; ++i) {
        printf("Endereco de ptr_x%i = %p | Valor de ptr_x%i = %i\n", i, (ptr_x + i), i, *(ptr_x + i));
    }

    for (i = 0; i < 5; ++i) {
        printf("Endereco de ptr_y%i = %p | Valor de ptr_y%i = %i\n", i, &ptr_y[i], i, *(ptr_y + i));
    }
    
    
    return 0;
}