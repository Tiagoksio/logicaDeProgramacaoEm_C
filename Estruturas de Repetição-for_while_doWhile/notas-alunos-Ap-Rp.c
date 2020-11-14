#include <stdio.h>

void main(){
    int cont;
    float nota1, nota2, nota3, media;
    
    
    for (cont = 1; cont<=3; cont++)
    {
               
        printf("\nInforme sua primeira nota: \n");
        scanf("%f", &nota1);
        
        printf("\nInforme sua segunda nota: \n");
        scanf("%f", &nota2);

        printf("\nInforme sua terceira nota: \n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3)/3;

        if (media>=7)
        {
            printf("\nParabéns! você foi aprovado com a média %.2f\n", media);
        }
        else
        {
            printf("\nSua nota final não foi suficiente, sua média é %.2f \n", media);
        }
     
                
    }
    
}