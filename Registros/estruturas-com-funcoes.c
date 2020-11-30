//Algoritmo para cálculo de tempo restante para o próximo aniversário.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct data
{
    int dia;
    int mes;
    int ano;
};
struct data proximo_aniversario(struct data calc_aniversario);
int qntDiasMes(int mes);

int main(void){
            
    struct data nascimento;
    struct data aniversario;
    
    printf("Informe sua data de nascimento (DD/MM/AAAA)\n");
    scanf("%d%*c%d%*c%d", &nascimento.dia, &nascimento.mes, &nascimento.ano);

    aniversario = proximo_aniversario(nascimento);

    if (aniversario.mes == 0 && aniversario.dia == 0)
    {
        printf("Hoje você faz %d anos! Feliz aniversário!\n", aniversario.ano);
    }
    else
    {
        printf("Faltam apenas %d meses e %d dias para você completar %d anos.\n", aniversario.mes, aniversario.dia, aniversario.ano + 1);
    }
    
}

struct data proximo_aniversario(struct data calc_aniversario){
    time_t relogio;
    relogio = time(NULL);
    struct tm tm = *localtime(&relogio);
    
    //Verifica se o usuário já fez aniversário esse ano
    if (calc_aniversario.mes < (tm.tm_mon + 1))
    {
        calc_aniversario.mes = 12 - tm.tm_mon - 1 + calc_aniversario.mes;
    }
    else
    {
        calc_aniversario.mes -= tm.tm_mon + 1; 
    }
    
    //Verifica se o usuário fará aniversário no mês atual
    if (tm.tm_mday > calc_aniversario.dia)
    {
        calc_aniversario.dia = qntDiasMes(tm.tm_mon) - tm.tm_mday + calc_aniversario.dia;
    }
    else
    {
        calc_aniversario.dia = tm.tm_mday - calc_aniversario.dia;
    }
    
    //Verifica e corrige a quantidade de meses para o aniversário baseado na quantidade de dias restantes
    if (calc_aniversario.dia > qntDiasMes(tm.tm_mon))
    {
        calc_aniversario.dia -= qntDiasMes(tm.tm_mon); 
    }
    else if (calc_aniversario.dia != 0)
    {
        calc_aniversario.mes--;
    }
        
    calc_aniversario.ano = tm.tm_year + 1900 - calc_aniversario.ano;    

    return calc_aniversario;// retorna a idade, quantos meses e quantos dias para o próximo aniversário  

}
int qntDiasMes(int mes){
    int qnt_dias;
    mes++;
    
    switch (mes)
    {
    case 2:
        qnt_dias = 28;
        break;
    
    case 4: case 6: case 9: case 11:
        qnt_dias = 30;
    default:
        qnt_dias = 31;
        break;
    }
    return qnt_dias;
};