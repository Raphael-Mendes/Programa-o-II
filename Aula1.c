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
    
    px = &x;
    py = &y;
    
    soma = *py + *px;
    
    printf("endereço x = %d e endereço px = %d", px, &x);
    return 0;
}