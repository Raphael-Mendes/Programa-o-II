
#include <stdio.h>

// Base:
/* 
int main(){
    return 0;
}
*/

/* Aula 1 - Introdução a Ponteiros
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
*/

/*aula 2 Ponteiros com double e endereços de memória
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
*/

// Aula 3 - Vetores
int main(void){
    float nota[5], total, media;
    for(int i = 0; i<5; ++i) {
        scanf("%f", &nota[i]);
        printf("\n %f\n", nota[i]);
    }
    for(int i = 0; i<5; ++i){
        total += nota[i];
    }
    media = total/5;
    printf("sua média é %f\n", media);
    printf("%f", nota);

    return 0;
}