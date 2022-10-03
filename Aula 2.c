//Aula 2 - Ponteiros com double e endereços de memória
#include <stdio.h>
int main(){
    int x;
    double y, soma;
    
    x = 10;
    y = 20.60;
    
    int *px;
    double *py;
    // Ponteiros a partir de endereços de memória
    px = 6422284;
    py = 6422272;

    soma = *px + *py;
    printf("\n endereço x = %d e endereço y = %d \n", &x, &y);
    printf("A soma do X e do Y é %f \n", soma);
    printf("o valor de x é %d", *px);
    printf("o valor de x é %f", *py);
    return 0;
}