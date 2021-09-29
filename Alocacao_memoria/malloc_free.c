/*
    A alocação dinâmica é feita via funções malloc, realloc, calloc e free da biblioteca stdlib.h

*/
# include <stdio.h>
# include <stdlib.h>

int main(void) {
    // A função malloc irá alocar memória e retornar o ponteiro do primeiro espaço alocado retornando um ponteiro do tipo "void".
    int *ptr_mDinamica = malloc(sizeof(int));
    
    //algumas vezes pode ocorrer erro por conta do tipo, então basta fazer o casting para o tipo do ponteiro
    //*ptr_mDinamica = (int *) malloc(sizeof(int));
    *ptr_mDinamica = 5;

    printf("Endereço apontado pelo ponteiro: %x\n", ptr_mDinamica);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr_mDinamica);

    // free() Desaloca a memória
    free(ptr_mDinamica); 

    return 0;
}

