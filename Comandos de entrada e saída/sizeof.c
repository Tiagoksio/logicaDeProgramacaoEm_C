//sizeof nos permite saber a quantidade de memória alocada em bytes
//sizeof nome_da_variavel;
//sizeof(nome do tipo);
#include<stdio.h>

void main(){
    int a, b, c, d, e, f, g;
  

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

}
