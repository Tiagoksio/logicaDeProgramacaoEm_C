//Tabuada
#include <stdio.h>

void cabecalho(void);
void menu(void);
void multiplicacao();

int main(){
    int opcao;
    char continuar;

    do
    {
        cabecalho();
        menu();
        scanf("%d", &opcao);
        if (opcao>10 || opcao <1)
        {
            printf("VALOR INVÁLIDO!");
            continuar = 'n';
        }
        else
        {
            cabecalho();
            multiplicacao(opcao);
            
            printf("Deseja continuar[s/n]?");
            scanf(" %c", &continuar);
            
        }     

        
    } while (continuar == 's');
    
    return 0;
}


void cabecalho(){
    printf("\n---------------------------------------\n");
    printf("-               TABUADA               -\n");
    printf("---------------------------------------\n\n\n");
};

void menu(void){

    printf("-               1      6                -\n");
    printf("-               2      7                -\n");
    printf("-               3      8                -\n");
    printf("-               4      9                -\n");
    printf("-               5      10               -\n");

    printf("Selecione qual tabuada deseja saber ou qualquer outro valor para sair: \n");
};

void multiplicacao(int num){
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("               %d X %d = %d\n", num, i, num*i);
    }
    
}