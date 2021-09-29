//sizeof nos permite saber a quantidade de memória alocada em bytes
//sizeof nome_da_variavel;
//sizeof(nome do tipo);
#include<stdio.h>

struct x {
    int a;
    int b;
    int c;
};

void main(){
    int a, b, c, d, e, f, g;
    int vetor[10];
    struct x estrutura;

    a=sizeof(int);
    b=sizeof(long);
    c=sizeof(short);
    d=sizeof(float);
    e=sizeof(char);
    f=sizeof(long int);
    g=sizeof(double);
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
    printf("%d\n", sizeof(vetor)); //imprime o tamanho em bytes do vetor, como são 10 posições de 4 bytes(valor do int) -> 40 bytes
    printf("%d\n", sizeof(estrutura)); // 3 variáveis int, totalizando 12 bytes
}