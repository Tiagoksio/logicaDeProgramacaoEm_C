//Matriz é um conjunto de variáveis do mesmo tipo acessíveis com um único nome 
//variáveis compostas homogênias multidimencionais
//São declaradas da seguinte forma:

//TIPO nome[indice_linha][indice_colula];
//TIPO nome[2][2] = {valor1, valor2, valor3, valor4};
//TIPO nome[3][5] = {{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4}}; agrupamentos maiores representam as linhas e os menores as colunas

#include <stdio.h>

void main(){
    int matriz2x2[2][2] = {{10,20},{100,20}};
    int matriz3x5[3][5] = {{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
    int contadorL, contadorC = 0;

    printf("Valor da linha 0, coluna 0 = %d\n", matriz2x2[0][0]);
    printf("Valor da linha 0, coluna 1 = %d\n", matriz2x2[0][1]);
    printf("Valor da linha 1, coluna 0 = %d\n", matriz2x2[1][0]);
    printf("Valor da linha 1, coluna 1 = %d\n", matriz2x2[1][1]);

    for (contadorL = 0; contadorL <= 2; contadorL++)
    {   
        printf("\n");     
        for (contadorC = 0; contadorC <= 4; contadorC++){
            printf(" %d", matriz3x5[contadorL][contadorC]);
        }
        
    }
    
}