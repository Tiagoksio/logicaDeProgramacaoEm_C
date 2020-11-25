#include <stdio.h>
#include <stdlib.h>
#include "calculos.h" //inclusão do header, entre aspas.

int main(){
    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);

    printf("%d\n", quad);
    printf("%d\n", cub);
    printf("%f\n", _PI);    
    
    return 0;
}
