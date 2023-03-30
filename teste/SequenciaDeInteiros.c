#include<stdio.h>
int main(){

int num, cont, maior = 0, soma = 0;
float media;
while (1){

    scanf("%d", &num);

    if (num == 0){
        break;
    }

    cont++;

    if (num > maior){
        maior = num;
    }

    soma = soma + num;

    }
    media = soma / cont;

    printf("Quantidade de números: %d\n", cont);
    printf("Maior número: %d\n", maior);
    printf("media %.2f\n", media);
}