#include <stdio.h>

void main(){
    int resposta;
    int tentativas;
    
    tentativas = 1;
    
    for ( ; ; )//loop 
    {
        printf("Se uma pessoa leva 15 min para almoçar, quantos minutos levará para 4 pessoas almoçarem?\n");
        scanf("%d", &resposta);
        
        if (resposta == 15)
        {
            printf("Você acertou!\n");
            break;
        }
        else
        {
            if (tentativas<3)
            {
                tentativas++;    
            }
            else
            {
                printf("DICA: As pessoas podem comer ao mesmo tempo\n");
            }
        }
               
    }
    
}
// Como não exite o teste, o programa ficará em looping a menos que a pausa "break" executada
// O loop pode ser feito tambem com o while, basta declarar o teste sempre como verdadeiro: EX: while (1) 
