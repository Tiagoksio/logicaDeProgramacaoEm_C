//Ao passar um parâmetro em uma função, ele receberá o valor da variável da função principal;
//Para que seja passado a referência, utilizamos o ponteiro, passando o endereço para a funçao
#include <stdio.h>

void soma10(int *ptrNumero);

void main(){
    int numero;
    
    printf("Digite um número inteiro:");
    scanf("%d", &numero);

    soma10(&numero);// utiliza-se o '&' para passar o endereço como parâmetro

    printf("%d\n", numero);

}

void soma10(int *ptrNumero){
    *ptrNumero += 10;
    return;
}
