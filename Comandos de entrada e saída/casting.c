#include <stdio.h>

void main(){
    int x = 16;
    int y = 3;
    float resultado;

    //Por conta das duas variáveis serem int, o resultado atribuído à variavel float, será a divisão por inteiro
    resultado = x/y;
    printf("%f\n", resultado);

    /*Para que a divisão entre os inteiros seja atribuída calculando as casas decimais,
    é necessária a operação de 'casting', que efetuará uma conversão para outro tipo */
    resultado = (float)x/y;
    printf("%f\n", resultado);

}
