//Algoritmo que recebe 3 notas de 3 alunos
//Verifica se os valores são válidos (entre 0 e 10)
//Calcula a média mostra quem foi aprovado e quem foi reprovado
#include <stdio.h>

float valorValido(float nota);

void main(){
    int count;
    float nota1, nota2, nota3;
    char aluno1[10], aluno2[10], aluno3[10];
    int aprovado[4];
    float media[4];
    count=0;
  
    while (count<3)   
    {
        printf("\nInforme seu nome: \n");
        
        switch (count)
        {
        case 0:
            scanf("%s", &aluno1[0]);
            break;
        case 1:
            scanf("%s", &aluno2[0]);
            break;
        case 2:
            scanf("%s", &aluno3[0]);
            break;
                
        }          
        

        printf("\nInforme sua primeira nota: \n");
        scanf("%f", &nota1);
        
        nota1=valorValido(nota1);
      
        printf("\nInforme sua segunda nota: \n");
        scanf("%f", &nota2);

        nota2=valorValido(nota2);

        printf("\nInforme sua terceira nota: \n");
        scanf("%f", &nota3);

        nota3=valorValido(nota3);

        media[count] = (nota1 + nota2 + nota3)/3;

        if (media[count]>=7)
        {
            aprovado[count]=1;
        }
        else
        {
            aprovado[count]=0;
        }
        
        count++;
    }
    
    printf("\nAlunos Aprovados:");
    printf("\nNome   |   Nota\n\n");
    
    for (count = 0; count < 3; count++)
    {
        if (aprovado[count] == 1)
        {
            switch (count)
            {
            case 0:
                printf("%s   |   %0.2f\n", &aluno1[0], media[count]);
                break;
            
            case 1:
                printf("%s   |   %0.2f\n", &aluno2[0], media[count]);
                break;
            
            case 2:
                printf("%s   |   %0.2f\n", &aluno3[0], media[count]);
                break;
        
            }
        }
        
    }

    printf("\nAlunos Reprovados:");
    printf("\nNome   |   Nota\n\n");

     for (count = 0; count < 3; count++)
    {
        if (aprovado[count] == 0)
        {
            switch (count)
            {
            case 0:
                printf("%s   |   %0.2f\n", &aluno1[0], media[count]);
                break;
            
            case 1:
                printf("%s   |   %0.2f\n", &aluno2[0], media[count]);
                break;
            
            case 2:
                printf("%s   |   %0.2f\n", &aluno3[0], media[count]);
                break;
        
            }
        }
        
    }
           
}

float valorValido(float nota){
    
    float nota_valida;

    while (nota<0 || nota>10)
    {
        printf("Valor inválido. Digite novamente\n");
        scanf("%f", &nota);
    }
    
    nota_valida = nota;

    return nota_valida;
}
