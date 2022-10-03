//aula 5 - Ponteiros + estruturas
#include <stdio.h>
int main(){
    struct data
    {
        int dia;
        int mes;
        int ano;
    };
    struct data agora, *ponteiro;
    ponteiro = &agora;
    //metódo errado:
    //*ponteiro.dia = 29
   ponteiro->dia = 29;
   ponteiro->mes = 9;
   ponteiro->ano = 2022;
    printf("%i/%i/%i", agora.dia, agora.mes, agora.ano);
    return 0;
}