#include <stdio.h>

void menu();

void decimalParaBinario(int decimalInteiro);
int potenciaDe2(int expoente);
int binarioParaDecimal(int binarioEntrada);

void main(){

    int opcao;
    int numEntrada, numSaida;
    char continuar;
    
    do
    {
    menu();

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Informe o número DECIMAL: ");
        scanf("%d", &numEntrada);
        decimalParaBinario(numEntrada);
        break;
    
    case 2:
        printf("Informe o número DECIMAL: ");
        scanf("%d", &numEntrada);
        printf("O número %d em OCTAL é: %o\n", numEntrada, numEntrada);
        break;
    
    case 3:
        printf("Informe o número DECIMAL: ");
        scanf("%d", &numEntrada);
        printf("O número %d em HEXADECIMAL é: %x\n", numEntrada, numEntrada);
        break;
    
    case 4:
        printf("Informe o número BINÁRIO: ");
        scanf("%d", &numEntrada);
        numSaida=binarioParaDecimal(numEntrada);
        printf("O número %d em DECIMAL é: %d\n", numEntrada, numSaida);
        break;
    
    case 5:
        printf("Informe o número BINÁRIO: ");
        scanf("%d", &numEntrada);
        numSaida=binarioParaDecimal(numEntrada);
        printf("O número %d em OCTAL é: %o\n", numEntrada, numSaida);
        break;
    
    case 6:
        printf("Informe o número BINÁRIO: ");
        scanf("%d", &numEntrada);
        numSaida=binarioParaDecimal(numEntrada);
        printf("O número %d em HEXADECIMAL é: %x\n", numEntrada, numSaida);
        break;
    
    case 7:
        printf("Informe o número OCTAL: ");
        scanf("%o", &numEntrada);
        printf("O número %o em DECIMAL é: %d\n", numEntrada, numEntrada);
        break;
    
    case 8:
        printf("Informe o número OCTAL: ");
        scanf("%o", &numEntrada);
        printf("O número %o BINÁRIO é:", numEntrada);
        decimalParaBinario(numEntrada);
        break;
    
    case 9:
        printf("Informe o número OCTAL: ");
        scanf("%o", &numEntrada);
        printf("O número %o em HEXADECIMAL é: %x\n", numEntrada, numEntrada);
        break;
    
    case 10:
        printf("Informe o número HEXADECIMAL: ");
        scanf("%x", &numEntrada);
        printf("O número %x em DECIMAL é: %d\n", numEntrada, numEntrada);
        break;
    
    case 11:
        printf("Informe o número HEXADECIMAL: ");
        scanf("%x", &numEntrada);
        printf("O número %x em OCTAL é: %o\n", numEntrada, numEntrada);
        break;
    
    case 12:
        printf("Informe o número HEXADECIMAL: ");
        scanf("%x", &numEntrada);
        printf("O número %x BINÁRIO é:", numEntrada);
        decimalParaBinario(numEntrada);
        break;
    
    default:
        printf("OPÇÃO INVÁLIDA\n");        
        break;
    } 
    printf("DESEJA CONTINUAR?[s/n]");
    setbuf(stdin, NULL);
    continuar=getc(stdin);
    } while (continuar=='s');
    
    printf("PROGRAMA ENCERRADO\n");
   
  
} 

void menu(){
    printf("\n----------------------------------------\n");
    printf("-          CONVERSOR DE BASES          -\n");
    printf("----------------------------------------\n\n");
    
    printf("SELECIONE A OPÇÃO DESEJADA: \n");
    printf("\n1 - DECIMAL PARA BINÁRIO");
    printf("\n2 - DECIMAL PARA OCTAL");
    printf("\n3 - DECIMAL PARA HEXADECIMAL\n");

    printf("\n4 - BINÁRIO PARA DECIMAL");
    printf("\n5 - BINÁRIO PARA OCTAL");
    printf("\n6 - BINÁRIO PARA HEXADECIMAL\n");
    
    printf("\n7 - OCTAL PARA DECIMAL");
    printf("\n8 - OCTAL PARA BINARIO");
    printf("\n9 - OCTAL PARA HEXADECIMAL\n");

    printf("\n10 - HEXADECIMAL PARA DECIMAL");
    printf("\n11 - HEXADECIMAL PARA OCTAL");
    printf("\n12 - HEXADECIMAL PARA BINARIO\n");

};

void decimalParaBinario(int decimalInteiro){
    
    int bit, cont;    
    int binario[32];
    
    bit=cont=0;         
      
            
    while(decimalInteiro>=2)
    {           
        binario [bit] = decimalInteiro%2;             
        decimalInteiro = decimalInteiro/2;        
        bit++;
    }
    binario[bit]=1;        
    
    for(cont = bit; cont >= 0; cont--)
    {
        printf("%d", binario[cont]);
    }
    printf("\n");
    
}


int potenciaDe2(int expoente);
int binarioParaDecimal(int binarioEntrada){
    int decimal, expo;    
    
    decimal=expo=0;

    do
    {
        if (binarioEntrada%2==1)
        {
            if(expo==0){
                decimal=1;
            }
            else
            {
                if (expo==1)
                {
                    decimal+=2;
                }
                else
                {
                    decimal+=potenciaDe2(expo);
                }               
                
            }
            
        }
        binarioEntrada/=10;
        expo++;
    } while (binarioEntrada!=0);    
    
    return decimal;    
}
int potenciaDe2(int expoente){
    int resposta = 2;

    for (;expoente > 1; expoente--)
    {
        resposta *= 2;
    }
    return resposta;

};
    
        
    