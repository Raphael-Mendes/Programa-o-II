#include <stdio.h>
/* 1. Faça um programa que leia um número inteiro e exiba no monitor o seu 
//antecedente (inteiro anterior) e o seu sucessor (inteiro posterior).

int main(void){
    int num, an, suc;
    scanf("%i", &num);
    an = 1-num;
    suc = num+1;
    printf("O sucessor do número é %i e o sucessor é %i", suc, an);
    return 0;
}
*/

/*2. Faça um programa que leia 3 números reais e exiba no monitor a média
//aritmética dos mesmos.

int main(void){
    float num, num2, num3, media;
    scanf("%f %f %f", &num, &num2, &num3);
    media = (num+num2+num3)/3;
    printf("%.2f", media);
    return 0;
}
*/

/*3. Faça um programa que leia dois números inteiros representando,
//respectivamente, o valor das horas e dos minutos, e exiba no monitor quantos minutos
//se passaram desde o início do dia.

int main(void){
    int hora, min, total;
    scanf("%i %i", &hora, &min);
    total = (hora*60)+min;
    printf("se passaram %i minutos desde o inicio do dia", total);
    return 0;
}
*/

/*4. Faça um programa que leia 2 números inteiros e exiba no monitor uma
//mensagem dizendo se eles são iguais ou diferentes.

int main(void){
    int num, num2;
    scanf("%i %i", &num, &num2);
    if(num == num2){
        printf("os numeros sao iguais");
    }
    else{
        printf("os numeros sao diferentes");
    }
    return 0;
}
*/

/*5. Faça um programa que leia 2 números inteiros e exiba no monitor o maior deles.
//Assuma que os números digitados são diferentes.

int main(void){
    int num, num2;
    scanf("%i %i", &num ,&num2);
    if (num>num2){
        printf("O maior numero e o %i", num);
    }
    else if(num == num2){
        printf("os numeros sao iguais");
    }
    else{
        printf("O maior numero e o %i", num2);
    }
    return 0;
}
*/

/*6. Faça um programa que leia um número inteiro e exiba no monitor uma
//mensagem dizendo se ele é par ou ímpar.

int main(void){
    int num;
    scanf("%i", &num);
    if (num % 2 == 0){
        printf("numero par");
    }
    else{
        printf("numero impar");
    }
    return 0;
}
*/

/*7. Faça um programa que leia 2 números inteiros e os exiba no monitor em ordem
//crescente.

int main(void){
    int x, y, *maior, *menor;
    scanf("%i %i", &x, &y);
    maior = &x;
    menor = &y;
    if (y>x){
        maior = &y;
        menor = &x;
    }
    printf("%i %i", *menor, *maior);
}
*/

/*8. Faça um programa que exiba no monitor os números inteiros de 1 a 100.
int main(void){
    for(int i=1; i<101; ++i){
        printf("%i\n", i);
    }
    return 0;
}
*/

/*9. Faça um programa que exiba no monitor os números inteiros de 23 a 578.
int main(void){
    for(int i=23; i<579; ++i){
        printf("%i\n", i);
    }
    return 0;
}
*/

/*10. Faça um programa que leia um número da entrada e exiba no monitor os
//números inteiros de 0 até este número.

int main(void){
    int final;
    scanf("%i", &final);
    for(int i=0; i < (final+1); ++i){
        printf("%i ", i);
    }
    return 0;
}
*/

//11. Faça um programa que leia um número inteiro e exiba no monitor os números
//pares entre 2 e o número lido.
/*
int main(void){
    int final;
    scanf("%i", &final);
    for(int i = 4; i<final; i = i+2){
        printf("%i ", i);
    }
    return 0;
}
*/

/*12. Faça um programa que leia um número inteiro e exiba no monitor os números
//pares entre o número lido e 100.

int main(void){
    int ini;
    scanf("%i", &ini);
    if (ini % 2 != 0){
        ini= ini+1;
    }
    else{
        ini = ini+2;
    }
    for (int i = ini; i<99; i=i+2){
        printf("%i ", i);
    }
    return 0;
}
*/

//13. Faça um programa que leia um número inteiro (limite), um incremento (incr,
//inteiro) e exiba no monitor os números inteiros de 0 até limite, com incremento de incr.
//Suponha que incr seja maior do que zero.

int main(void){
    int fim, inc;
    scanf("%i %i", &fim, &inc);
    for(int i = 0; i<=fim; i=i+inc){
        printf("%i ", i);
    }
    return 0;
}