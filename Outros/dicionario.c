//EXERCÍCIO: Programa que efetua pesquisa de definições de palavras em um dicionário pré-cadastrado.
#include <stdio.h>
#include <stdbool.h>

struct dicionario
{
    char palavra[20];
    char definicao[50];
};

bool compararStrings(const char palavra1[], const char palavra2[]);
int procurarString(const struct dicionario lingua[], const char procurar[], const int numDePalavras);

int main(){
    const int NUMERO_DE_DEFINICOES = 7;
    char palavra[20] = {'\0'};
    int resultadoPesquisa;
    //Não foi possíve utilizar a const NUMERO_DE_DEFINICOES como argumento para inicializar o vetor da struct abaixo, por isso o número 7.
    const struct dicionario portugues[7] = {
        {"defenestrado", "Lançado pela janela"}, 
        {"biscoito", "Alimento feito de farinha"}, 
        {"bolacha", "Biscoito chato ou tapa na cara"}, 
        {"farinha", "Pó de sementes trituradas"}, 
        {"queijo", "Alimento feito de leite"}, 
        {"cachorro", "Animal domestico"}, 
        {"guaraná", "fruta brasileira"}
        };

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    resultadoPesquisa = procurarString(portugues, palavra, NUMERO_DE_DEFINICOES);// Retorna a posição do vetor da definição da palavra procurada

    if (resultadoPesquisa != -1)
    {
        printf("%s\n", portugues[resultadoPesquisa].definicao);
    }
    else{
        printf("Palavra não encontrada\n");
    }
    
    return 0;
}
bool compararStrings(const char palavra1[], const char palavra2[]){
    int i=0;
    while (palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0')
    {
        ++i;
    }
    if (palavra1[i] == '\0' && palavra2[i] == '\0')
    {
        return true;
    }
    else{
        return false;
    }

}

int procurarString(const struct dicionario lingua[], const char procurar[], const int numDePalavras){
    int i=0;
    while (i < numDePalavras)
    {
        if (compararStrings(procurar, lingua[i].palavra))
        {
            return i;
        }
        else{
            ++i;
        }                               
    }
    return -1;
};

