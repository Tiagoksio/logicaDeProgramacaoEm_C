//Para passar um vetor como parâmetro por referência, passamos o endereço da primeira posição do vetor por ponteiro.
#include <stdio.h>

float mediaNotas(int numAlunos, float *ptrNotas);
void cabecalhoCadastro();
void cabecalhoMedia();

void main(){
    int contador, i;
    float notas[30], media;
    char continuar;

    contador = 0;

    cabecalhoCadastro();
    do
    {
        printf("Informe a %dª nota: ", contador+1);
        scanf("%f", &notas[contador]);

        printf("\nDeseja continuar?[s/n]\n");
        scanf(" %c", &continuar);
        contador++;

        if (contador == 30)
        {
            printf("NÃO SERÁ POSSÍVEL REGISTRAR NOVAS NOTAS. MEMÓRIA CHEIA");
            continuar = 'n';
        }
        
    } while (continuar == 's');

    cabecalhoMedia();

    media = mediaNotas(contador, notas);// passamos assim o endereço do vetor em vez de cada posição

    for (i = 0; i < contador; i++)
    {
        printf("\n%dª nota: %.2f", i+1, notas[i]);
    }
    printf("\nMédia da turma = %.2f\n", media);

}

float mediaNotas(int numAlunos, float *ptrNotas){ // O ponteiro recebe o endereço do vetor original
    int count;
    float med;

    for (count = 0; count < numAlunos; count++)
    {
        med+=ptrNotas[count];
    }
    med /= numAlunos;
    return med;

}

void cabecalhoCadastro(){
    printf("\n----------------------------------------\n");
    printf("-      CADASTRO DE NOTAS DA TURMA      -\n");
    printf("----------------------------------------\n\n\n");
}

void cabecalhoMedia(){

    printf("\n------------------------------\n");
    printf("-       MEDIA DA TURMA       -\n");
    printf("------------------------------\n");
}