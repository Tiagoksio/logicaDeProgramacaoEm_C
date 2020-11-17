#include<stdio.h>

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
};

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
};

int main (void){
    
    char nomeUsuario[10];
    int idadeUsuario, diasDeTreino;
    float pesoUsuario, pesoDesejado;

    diasDeTreino = 0;
        
    printf("Informe seu nome: ");
    scanf("%s", &nomeUsuario[0]);

    printf("Informe sua idade: ");
    scanf("%d", &idadeUsuario);

    printf("Informe seu peso atual em 'kg': ");
    scanf("%f", &pesoUsuario);

    printf("Informe seu o peso que deseja alcançar em 'kg': ");
    scanf("%f", &pesoDesejado);

   
 
    if (pesoUsuario>pesoDesejado)
    {
        while (pesoUsuario>pesoDesejado)
        {
            pesoUsuario = perdaDePeso(idadeUsuario, pesoUsuario);
            diasDeTreino++;
        }

    }
    else
    {
        while (pesoUsuario<pesoDesejado)
        {
            pesoUsuario = ganhoDeMassa(idadeUsuario, pesoUsuario);
            diasDeTreino++;
        }
        
    }    
    printf("\nSr(a).%s, em %d dias de treino você ficará com %0.2fkg\n", &nomeUsuario[0], diasDeTreino, pesoUsuario);

}



