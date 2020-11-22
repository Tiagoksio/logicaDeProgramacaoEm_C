//Efetuar a leitura do arquivo.txt
#include <stdio.h>

int main(){
    
    FILE *ptrArquivo;// Ponteiro para o arquivo;
    char texto[20]; //string para armazenar o texto do arquivo;
        
    //Abrindo o arquivo com o modo "r", usado para leitura
    ptrArquivo = fopen("arquivoLeitura.txt", "r");

    //enquanto não for o fim do arquivo o loop será executado e será impresso na tela
    while (fgets(texto,20,ptrArquivo) != NULL)
    {
        printf("%s", texto);        
    }
    
    //fechar o arquivo
    fclose(ptrArquivo); 
    
    return 0;
}
