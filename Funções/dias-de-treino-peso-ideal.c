#include<stdio.h>
#include <string.h>

float ganhoDeMassa(int idade, float peso);
float perdaDePeso(int idade, float peso);

int main (void){
    
    struct fichaUsuario
    {
        char nomeUsuario[50];
        int idadeUsuario;
        float pesoInicial, pesoDesejado, pesoFinal;
    };

    struct fichaUsuario aluno;
    int diasDeTreino;  

    diasDeTreino = 0;

    printf("\n---------------- Cadastro de usuário ----------------\n\n\n");
        
    printf("Informe seu nome: ");
    fgets(aluno.nomeUsuario,50,stdin);
    printf("Informe sua idade: ");
    scanf("%d", &aluno.idadeUsuario);
    printf("Informe seu peso atual em 'kg': ");
    scanf("%f", &aluno.pesoInicial);
    printf("Informe seu o peso que deseja alcançar em 'kg': ");
    scanf("%f", &aluno.pesoDesejado);
    printf("\n----------------------------------------------------\n\n\n");
    aluno.pesoFinal=aluno.pesoInicial;
 
    if (aluno.pesoInicial>aluno.pesoDesejado)
    {
        
        while (aluno.pesoFinal>aluno.pesoDesejado)
        {
            aluno.pesoFinal = perdaDePeso(aluno.idadeUsuario, aluno.pesoFinal);
            diasDeTreino++;
        }

    }
    else
    {
        while (aluno.pesoFinal<aluno.pesoDesejado)
        {
            aluno.pesoFinal = ganhoDeMassa(aluno.idadeUsuario, aluno.pesoFinal);
            diasDeTreino++;
        }
        
    }    
    printf("\nSr(a).%s, em %d dias de treino você ficará com %.2fkg.\n", aluno.nomeUsuario, diasDeTreino, aluno.pesoFinal);

}

float perdaDePeso(int idade, float peso){
    if (idade<25)
    {
        peso = peso - (peso*0.05);
    }
    else
    {
        if (idade<30)
        {
            peso = peso - (peso*0.03);
        }
        else
        {
            if (idade<50)
            {
                peso = peso - (peso*0.02);
            }
            peso = peso - (peso*0.01);
        }
            
    }
    
    return peso;
}

float ganhoDeMassa(int idade, float peso){
    if (idade<25)
    {
        peso = peso + (peso*0.05);
    }
    else
    {
        if (idade<30)
        {
            peso = peso + (peso*0.03);
        }
        else
        {
            if (idade<50)
            {
                peso = peso + (peso*0.02);
            }
            peso = peso + (peso*0.01);
        }

    }
    
    return peso;
}



