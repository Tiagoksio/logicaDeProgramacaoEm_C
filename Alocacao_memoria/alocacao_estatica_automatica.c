/* 
    A memoria pode ser alocada logicamente nos segmentos: 
    TEXT -> Instruções do programa em si;
    DATA -> Variáveis globais e statics
    HEAP -> alocação dinâmica
    STACK -> alocação automática

*/
#include <stdio.h>

static int a = 0;  // variável global, alocação estática

void incrementa(void) {
    int b = 0; // variável local, alocação automática
    static int c = 0; // variável local, alocação estática

    printf ("a: %d, b: %d, c: %d\n", a, b, c);
    a++;
    b++;
    c++;
}

int main(){
    int i;

    for (i = 0; i < 5; i++)
        incrementa();

    return 0;
}