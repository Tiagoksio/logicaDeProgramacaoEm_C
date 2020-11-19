//incremento e decremento podem ser repesentado das seguintes formas: 
// x++ || ++x == x = x + 1;
// x-- || --x == x = x - 1;
#include<stdio.h>
void main(){

    int numero;

    
    //pré incremento: ++x; o incremento é feito antes, assim o numero valendo 10 será impresso 11 
    numero=10;
    printf("Número pré incrementado: %d\n", ++numero);
    
    //pós incremento: x++; o incremento é feito depois, assim o numero valendo 10 será impresso 10
    numero = 10;   
    printf("Número pós incrementado: %d\n", numero++);

    //Decremento é a mesma coisa mas com subtração    
}

