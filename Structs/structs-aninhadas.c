//struct dentro de struct
#include <stdio.h>
#include <stdlib.h>
void cabecalhoCadastro();
void rodape();
void cabecalhoCadastrados();
void cadastroCliente();
void cadastroEndereco();
void cadastroDataNascimento();
void clienteCadastrados();

struct tp_endereco
{
	char estado[5];
	char cidade[30];
	int cep;
	int numero;
};
struct tp_data_nascimento
{
	int dia;
	int mes;
	int ano;
};
struct tp_cadastro_cliente
{
	char nomeCliente[40];
	int telefone;
	struct tp_endereco endereco;
	struct tp_data_nascimento dataDeNascimento;	
};
struct tp_cadastro_cliente cadCliente[2];

void main(){
	int contador;
	
	cabecalhoCadastro();

	for (contador = 0; contador <= 1; contador++)
	{	
		cadastroCliente(&contador);
		rodape();
	}	
	cabecalhoCadastrados();

	for (contador = 0; contador < 2; contador++)
	{		
		clienteCadastrados(&contador);
	}	

}
void cadastroCliente(int *ptrContador){
	
	printf("Nome do cliente..........: ");
	setbuf(stdin, NULL);//limpar o buffer do teclado;
	fgets(cadCliente[*ptrContador].nomeCliente,40,stdin);
		
	printf("Nº de telefone do cliente: ");
	scanf("%d", &cadCliente[*ptrContador].telefone);

	cadastroEndereco(&ptrContador);
	cadastroDataNascimento(&ptrContador);

};
void cadastroEndereco(int **ptrContador){
	
	printf("\nEstado[sigla]............: ");
	setbuf(stdin, NULL);
	fgets(cadCliente[**ptrContador].endereco.estado,3,stdin);
		
	setbuf(stdin, NULL);
	printf("CEP......................: ");
	scanf("%d", &cadCliente[**ptrContador].endereco.cep);
		
	printf("Cidade...................: ");
	setbuf(stdin, NULL);
	gets(cadCliente[**ptrContador].endereco.cidade);//gets outra função de entrada
			
	setbuf(stdin, NULL);
	printf("Nº da casa...............: ");
	scanf("%d", &cadCliente[**ptrContador].endereco.numero);

};

void cadastroDataNascimento(int **ptrContador){
	
	printf("\nAno de nascimento........: ");
	scanf("%d", &cadCliente[**ptrContador].dataDeNascimento.ano);

	printf("Nº mês de nascimento.....: ");
	scanf("%d", &cadCliente[**ptrContador].dataDeNascimento.mes);

	printf("Dia de nascimento........: ");
	scanf("%d", &cadCliente[**ptrContador].dataDeNascimento.dia);
};
void clienteCadastrados(int *ptrContador){
	
	printf("\nNome..............: %s", cadCliente[*ptrContador].nomeCliente);
	printf("Telefone..........: %d", cadCliente[*ptrContador].telefone);
	printf("\nCidade-UF.........: %s-%s", cadCliente[*ptrContador].endereco.cidade, cadCliente[*ptrContador].endereco.estado);
	printf("\nCEP...............: %d", cadCliente[*ptrContador].endereco.cep);
	printf("\nNúmero da casa....: %d", cadCliente[*ptrContador].endereco.numero);
	printf("\nData de nascimento: %d/%d/%d\n", cadCliente[*ptrContador].dataDeNascimento.dia, cadCliente[*ptrContador].dataDeNascimento.mes, cadCliente[*ptrContador].dataDeNascimento.ano);

};


void cabecalhoCadastro(){
    printf("\n-----------------------------------------\n");
    printf("-           CADASTRO DE CLIENTE         -\n");
    printf("-----------------------------------------\n\n");
}

void rodape(){
    printf("\n------------------------------\n");
    printf("-       FIM DO CADASTRO      -\n");
    printf("------------------------------\n");
}

void cabecalhoCadastrados(){
    printf("\n-----------------------------------------\n");
    printf("-           CLIENTES CADASTRADOS        -\n");
    printf("-----------------------------------------\n\n");
}