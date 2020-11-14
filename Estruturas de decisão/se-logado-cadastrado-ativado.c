//Verificar se conta está cadastrada, logada e ativada.
# include <stdio.h>

    void main(){

        int cadastrado, ativo, logado = 0;
        char opcao;
        
        printf("Deseja cadastrar sua conta? S/N \n");
        scanf(" %c", &opcao);

        if (opcao == 'S')
        {
            cadastrado = 1; 
            printf("\nConta cadastrada\n");
        }
        
        printf("Deseja ativar sua conta? S/N \n");
        scanf(" %c", &opcao);

        if (opcao == 'S')
        {
            ativo = 1;
            printf("\nConta ativada\n");
        }
        
        printf("Deseja logar sua conta? S/N \n");
        scanf(" %c", &opcao);

        if (opcao == 'S')
        {
            logado = 1;
            printf("\nConta logada\n");
        }

        if((cadastrado == 1) && (ativo == 1) && (logado == 1))
        {
            printf("\nUsuário cadastrado, ativo e logado\n Bem vindo!\n");            
        } else {
            printf("\nAlgo deu errado.\n");
        }
        
}
