#include <stdio.h>
#include <stdlib.h>


void cadastroTimes(int qnt_times);

struct times_de_futebol
{
    char nome[20];
    int pontos;
}cadTimes[4];

int main(){
    int i, j, qntTimes, tentarNovamente = 0;
    int saldoTime1, saldoTime2, vencedor, maisPont=0;

    cadTimes->pontos = 0;
    
    
    do
    {
        tentarNovamente = 0;
        printf("\nSelecione a opção referênte à quantidade de times do campeonato: ");
        printf("\n2 - Dois Times\n4 - Quatro Times\n\n0 - SAIR\nOPÇÃO:");
        scanf("%d", &qntTimes);
        if (qntTimes!=2 && qntTimes!=4 && qntTimes!=0)
        {
            printf("QUANTIDADE INVÁLIDA!");
            tentarNovamente =1;                                   
        }
        else
        {
            if (qntTimes==0)
            {
                printf("PROGRAMA ENCERRADO!\n");
                return 0;
            }            
        }      

    } while (tentarNovamente == 1);

    switch (qntTimes)
    {
    case 2:
        cadastroTimes(qntTimes);
        break;
    
    case 4:
        cadastroTimes(qntTimes);                
        break;    
    }
    
    for (i = 0; i < qntTimes; i++)
    {
        for (j = i+1; j < qntTimes; j++)
        {
            printf("\n%sVS\n%s", cadTimes[i].nome, cadTimes[j].nome);
            printf("\nGols marcados pelo %s:", cadTimes[i].nome);
            scanf("%d", &saldoTime1);                      

            printf("\nGols marcados pelo %s:", cadTimes[j].nome);
            scanf("%d", &saldoTime2);

            if (saldoTime1>saldoTime2)
            {
                cadTimes[i].pontos += 3;
            }
            else
            {
                if (saldoTime2>saldoTime1)
                {
                    cadTimes[j].pontos += 3;
                }
                else
                {
                    cadTimes[i].pontos++;
                    cadTimes[j].pontos++;
                }               
                
            }
            
        }        
    };
    
    for (i = 0; i < qntTimes; i++)
    {
        printf("\n%s", cadTimes[i].nome);
        printf("%d pts\n", cadTimes[i].pontos);
        if (cadTimes[i].pontos>maisPont)
        {
            vencedor=i;
            maisPont=cadTimes[i].pontos;
        }
        
    };
    
    printf("\nO Vencedor foi o %s com %d pts\n", cadTimes[vencedor].nome, cadTimes[vencedor].pontos);

    return 0;

}
void cadastroTimes(int qnt_times){
    int contador;
    for(contador = 0; contador < qnt_times; contador++)
    {
        printf("\nInforme o %dº Time: ", contador+1);
        setbuf(stdin, NULL);
        fgets(cadTimes[contador].nome,20,stdin);            
    }

};