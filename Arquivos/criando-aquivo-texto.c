//Uma das formas de armazenar dados é através da criação de arquivo.txt.
//Com arquivos podemos salvar os dados.
#include <stdio.h>

void main(){
    // declararando o tipo FILE e criando a variável ponteiro para o arquivo
    FILE *ptrArquivo;
    
    //fopen(diretório_do_arquivo, "modo") abre o arquivo; 
    //Ae colocar só o nome do arquivo, ele é criado no mesmo diretório de execução;
    //A letra 'a' representa um dos modos. Cria o arquivo ou abre para gravar;
    ptrArquivo = fopen("arquivo.txt", "a");

    //fclose(endereço do arquivo) fecha o arquivo
    fclose(ptrArquivo);    
      
   //mensagem para o usuário
   printf("Arquivo criado com sucesso!\n");
}
