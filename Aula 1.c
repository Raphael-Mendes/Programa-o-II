
#include <stdio.h>

//Aula 1 - Introdução a Ponteiros
int main(){
    int x, y;
    int *p;
    //ponteiro a partir de variáveis:
    p = &x;
    x=10;
    y = 20;
    *p = y;
    printf("%d %d", x, y);
    return 0;
}


