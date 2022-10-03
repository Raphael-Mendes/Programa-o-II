//Aula 3 - Vetores
#include <stdio.h>
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