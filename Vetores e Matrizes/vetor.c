//vetor é um conjunto de variáveis do mesmo tipo acessíveis com um único nome, ou seja, 
//variáveis compostas homogênias unidimensionais 
//São declaradas da seguinte forma:

//TIPO nome[quantidade_de_posições_contando_do_0];
//TIPO nome[4] = {valor0, valor1, valor2, valor3}; 
//TIPO nome[] = {valor0, valor1, valor2}; dessa forma, o tamanho do vetor será a quantidade de elementos listados, no caso 3.  

#include<stdio.h>

void main(){
    int seq_fibonacci [] = {0, 1, 1, 2, 3, 5, 8, 13}, vetorZerado[6], vetorZerado2[6]= {0}, vetorZerado3[6] = { };
    float notas[10], media;
    int contador, opcaoExemplo, continuar;
    
    media = 0;
    do
    {
        printf("\nDigite '1' para imprimir o exemplo 1, vetor com valores declarados ao criá-lo:");
        printf("\nDigite '2' para imprimir o exemplo 2, leitura e escrita dos valores do vetor:");
        printf("\nDigite '3' para imprimir o exemplo 3, atribuir valor zero a todas as posições:");
        scanf("%d", &opcaoExemplo);
    
        switch (opcaoExemplo)
        {
        case 1:
            for (contador = 0; contador <= 7; contador++)
        {
                printf("\nValor da posição %d = %d", contador, seq_fibonacci[contador]);
        }    
        printf("\n\n\n");
            break;
    
        case 2:
            //Para armazenar valores no vetor da sequinte forma:
    
            for (contador = 0; contador <= 2; contador++)
            {
                printf("\nInforme sua %dª nota:", contador+1);
                scanf("%f", &notas[contador]);
                media += notas[contador]/3;
            }

            for (contador = 0; contador <= 2; contador++)
            {
                printf("Sua %dª nota foi: %.2f\n", contador+1, notas[contador]);

            }
            printf("Sua média é %.2f\n", media);
            break;

        case 3:
            //Quando um vetor é iniciado, ele não está vazio, ele terá valores aleatórios preenchidos
            
            printf("\nValores aleatórios\n");
            for (contador = 0; contador <= 5; contador++)
            {
                printf("\nPosição %d = %d\n", contador, vetorZerado[contador]);
            }
            //Atribuindo o valor 'zero'
            printf("\nAtribuindo 'zero'\n");
            for (contador = 0; contador <= 5; contador++)
            {
                vetorZerado[contador] = 0;
                printf("Posição %d = %d\n", contador, vetorZerado[contador]);
            }
            //Apenas declarar um valor 0 na lista ou deixando vazio '{ }', mas só funciona com o zero: int vetoZerado2[6] = {0}; ou int vetoZerado3[6] = { };
            printf("\nVetor inicializado com '0' em todas as posições declara um zero na lista\n");
            for (contador = 0; contador <= 5; contador++)
            {
                printf("\nPosição %d = %d\n", contador, vetorZerado2[contador]);
            }
            printf("\nVetor inicializado com '0' em todas as posições deixando a lista em branco\n");
            for (contador = 0; contador <= 5; contador++)
            {
                printf("\nPosição %d = %d\n", contador, vetorZerado3[contador]);
            }
            break;    
        
        default:
            printf("ERRO: Opção inválida");
            break;
        }

        printf("\nDigite '1' para continuar:");
        scanf("%d", &continuar);
    
    } while (continuar == 1);   
    

}
