#include<stdio.h>
#include<time.h>

void cabecalhoCadastramento();
void cabecalhoCadastro();
void cabecalhoMaisAntigos();

struct funcionario
{
    char nome[40];
    int anoDeIngresso, tempoDeServico;    
};
time_t relogio;
    
void main(){
    
    struct funcionario cadastro [14];

    int funcionarioMaisAntigo=0;

    relogio = time(NULL);
    struct tm tm = *localtime(&relogio);

    cabecalhoCadastramento();

    for (int i = 0; i <= 14; i++)
    {        
        printf("\nInforme o nome: ");
        gets(cadastro[i].nome);
        setbuf(stdin, NULL);
        printf("Informe o ano em que foi contratado: ");
        scanf("%d", &cadastro[i].anoDeIngresso);
        setbuf(stdin, NULL);
        
        cadastro[i].tempoDeServico = tm.tm_year+1900-cadastro[i].anoDeIngresso;
    }

    cabecalhoCadastro();

    for (int i = 0; i <= 14; i++)
    {
        printf("Nome....................: %s\n", cadastro[i].nome);
        printf("Ano de ingresso.........: %d\n", cadastro[i].anoDeIngresso);
        printf("Tempo de serviço(anos)..: %d\n\n", cadastro[i].tempoDeServico);        
        
        if (cadastro[i].tempoDeServico > funcionarioMaisAntigo)
        {
            funcionarioMaisAntigo = cadastro[i].tempoDeServico;
        }
        
    }

    cabecalhoMaisAntigos();
    
    for (int i = 0; i <= 14; i++)
    {
        if (cadastro[i].tempoDeServico == funcionarioMaisAntigo)
        {
            printf("Nome....................: %s\n", cadastro[i].nome);
            printf("Ano de ingresso.........: %d\n", cadastro[i].anoDeIngresso);
            printf("Tempo de serviço(anos)..: %d\n\n", cadastro[i].tempoDeServico); 
        }
        
    }    
    
}
void cabecalhoCadastramento(){
    printf("---------------------------------------------\n");
    printf("--------------- CADASTRAMENTO ---------------\n");
    printf("---------------------------------------------\n");
}

void cabecalhoCadastro(){
    printf("----------------------------------------\n");
    printf("--------------- CADASTRO ---------------\n");
    printf("----------------------------------------\n");
}
void cabecalhoMaisAntigos(){
    printf("---------------------------------------------------\n");
    printf("------------ FUNCIONARIOS MAIS ANTIGOS ------------\n");
    printf("---------------------------------------------------\n");
}
