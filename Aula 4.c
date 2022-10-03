//aula 4 - Estruturas 
#include <stdio.h>
int main(){
    struct estrutura{
        int in;
        float num;
        char letra;
    };
    struct estrutura agora;
    agora.in = 29;
    agora.num = 0.3;
    agora.letra = 'a';
    printf("\n%i\n %.1f\n %c", agora.in, agora.num, agora.letra);
    
    return 0;
}
