//EXERCÍCIO:Programa que com duas funções, uma para receber e outra para mostrar uma struct composta por hora, minuto e segundo. A mesma utilizada como argumento
#include <stdio.h>

struct horarios
{
    int hora;
    int minuto;
    int segundo;
};

void receberHorario(struct horarios list[5]);
void mostrarHorario(struct horarios list[5]);

int main(){
    struct horarios listaHorarios[5];
    receberHorario(listaHorarios);
    mostrarHorario(listaHorarios);
    
    return 0;
}

void receberHorario(struct horarios list[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("\nInforme o %iº Horário: hh:mm:ss\n", i + 1);
        scanf("%i:%i:%i", &list[i].hora,&list[i].minuto,&list[i].segundo);
    }
    
}
void mostrarHorario(struct horarios list[5]){
    
    for (int i = 0; i < 5; i++)
    {
        printf("O %iº Horário: %i:%i:%i\n", i + 1, list[i].hora, list[i].minuto, list[i].segundo);
    }
}