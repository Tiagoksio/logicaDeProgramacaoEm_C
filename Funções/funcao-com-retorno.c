//Funções são subrotinas usadas em um programa

/*tipo_de_retorno nomeDaFuncao (listagem de parâmetros opcional){
	instruções;
	retorno;
}*/
#include <stdio.h>
#include <stdlib.h>

int multiplica(int num1,int num2){
	int produto; // variável de escopo local

	produto = num1*num2;
	
	return produto;
}

void main (){
	int numero1, numero2, resposta;

    printf("Informe o primeiro número:");
	scanf("%d", &numero1);
	
    printf("Informe o segundo número:");
	scanf("%d", &numero2);

	resposta = multiplica(numero1, numero2); 

	printf("%d x %d = %d\n", numero1, numero2, resposta);
	
}

  