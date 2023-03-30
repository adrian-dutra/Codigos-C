#include<stdio.h>
#include<stdlib.h>
int main(){

    int n, cont, maior, qtd;
    scanf("%d", &qtd);
    maior = 0;

    for (int i=0; i < qtd; i++){
        scanf("%d", &n);
            if (maior < n){
                maior = n;
                cont = 0;
            }
            if (maior == n){
                cont++;
            }
        }
    printf("%d %d\n", maior, cont);
}