//Structs, também conhecidas como Registros, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado. 

//Uma estrutura de dados heterogênia agrupada sob um mesmo tipo, o tipo struct nome { diferentes tipos de dados referentes ao 'nome'}

//A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável. Por exemplo, se for preciso armazenar o nome, o numero e a nota de um aluno, pode-se criar uma struct chamada ficha_aluno e agrupar os dados em um único tipo de dado, conforme o exemplo a seguir.
#include <stdio.h>

void main (){
    
    struct ficha_aluno // tipo de dado e definição da struct
	{
    	char nome[40];
    	int numero;
    	float nota;        
	}aluno; //Pode criar a variável depois do colchete e antes do ponto e virgura...

	//... ou declarando da mesma forma das outras variáveis: struct ficha_aluno aluno; 
	// 'aluno' é o nome da variável e o tipo struct ficha_aluno.
	
	printf("\n---------------- Cadastro de aluno ----------------\n\n\n");
	printf("Nome do aluno: ");
	fgets(aluno.nome,40,stdin); //Para armazenar na variável 'aluno' na strig 'nome'
	printf("Número do aluno: ");
	scanf("%d", &aluno.numero);
	printf("Nota do aluno: ");
	scanf("%f", &aluno.nota);

	printf("\n---------------- Dados cadastrados ----------------\n\n\n");
	printf("Nome do aluno: %s", aluno.nome);// Para escrever a variável 'aluno' string 'nome'.
	printf("Número do aluno: %d\n", aluno.numero);
	printf("Nota do aluno: %.2f\n", aluno.nota);

}

