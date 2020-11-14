#include <stdio.h>
#include <stdlib.h>

void main(){
   
    int decimalInteiro, bit, cont;    
    int binario[32];
        
    bit=decimalInteiro=cont=0;
            
    printf("\nInforme um número decimal inteiro: \n");
    scanf("%d", &decimalInteiro);
  
    printf("O número %d em binário é: ", decimalInteiro);
            
    while (decimalInteiro>=2)
    {           
        binario [bit] = decimalInteiro%2;             
        decimalInteiro = decimalInteiro/2;        
        bit++;
    }
    binario[bit]=1;        
    
   for (cont = bit; cont >= 0; cont--)
   {
       printf("%d", binario[cont]);
   }
   printf("\n");
   
              
}   

