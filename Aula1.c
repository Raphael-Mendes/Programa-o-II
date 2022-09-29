/* aula 1
#include <stdio.h>

int main(){
    int x, y;
    int *p;
    p = &x;
    x=10;
    y = 20;
    *p = y;
    printf("%d %d", x, y);

    return 0;
}
*/

//aula 2
#include <stdio.h>

int main(){
    int x;
    double y, soma;
    
    x = 10;
    y = 20.60;
    
    int *px;
    double *py;
    
    px = 6422284;
    py = 6422272;

    soma = *px + *py;
    printf("\n endereço x = %d e endereço y = %d \n", &x, &y);
    printf("A soma do X e do Y é %f \n", soma);
    printf("o valor de x é %d", *px);
    printf("o valor de x é %f", *py);
    return 0;
}