//Abrir gravar e fechar arquivo;
#include <stdio.h>

int main(){
    
    FILE *ptrArquivo;// Ponteiro para o arquivo;
    char palavra[20]; //string;
    
    //Abrindo o arquivo com o modo "w", usado para gravação de dados subistituindo o que esta gravado
    //Para não apagar o que ja está no arquivo, podemos utilizar o modo "a";
    ptrArquivo = fopen("arquivoPalavra.txt", "w");

    //teste para verificar se o arquivo foi realmente criado
    if (ptrArquivo == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1; //para abortar o programa.
    }
    else
    {
        printf("Escreva uma palavra para gravar em arquivoPalavra.txt:");
        fgets(palavra,20,stdin);

        //fprintf(destino, "%s", origem) para armazenar a string no arquivo;
        //Pode utilizar um "%s\n"
        fprintf(ptrArquivo,"%s",palavra);

        //fclose() para fechar o arquivo;
        fclose(ptrArquivo);

        printf("Dados gravados com sucesso!\n");
    }    

    return 0;
}
