//Os ponteiros armazenam o endereço de memória de uma outra variável, um valor hexadecimal

#include <stdio.h>

void main () {
    int valor = 27; // variável que será apontada
    int *ptrValor; //Declaração do ponteiro. Seu tipo precisa ser o mesmo da variável apontada

    float x = 0;
    float *ptrX;
    float **pPtrX;

    ptrValor = &valor; // Atribuindo valor.

    printf("Conteudo da variável 'valor': %d\n", valor);
    printf("Endereço da variável 'valor': %x\n", &valor);//%x Para hexadecimal
    printf("Conteúdo da variável ponteiro 'ptr': %x\n\n", ptrValor);

    //Ponteiro de ponteiro é um ponteiro que aponta para outro ponteiro que aponta para uma variável

    ptrX = &x;
    pPtrX = &ptrX;

    printf("Conteudo da variável 'x': %f\n", x);
    printf("Endereço da variável 'x': %x\n", &x);//%x Para hexadecimal
    printf("Conteúdo da variável ponteiro 'ptrX': %x\n", ptrX);
    printf("Conteúdo da variável ponteiro do ponteiro de X 'pPtrX': %x\n\n", pPtrX);

    printf("Valor da variável 'x' através do ponteiro 'ptrX': %f\n", *ptrX);//Colocando o asterisco, a variável será lida como ponteiro
    printf("Valor da variável 'x' através do ponteiro do ponteiro de x'pPtrX': %f\n\n", **pPtrX);

    //podemos acessar o valor da variável apontada através dos ponteiros

    *ptrX += 10;
    printf("*ptrX += 10 == %f\n", x);   

    **pPtrX += 101;
    printf("*pPtrX += 101 == %f\n", x);




}


