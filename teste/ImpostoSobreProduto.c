#include<stdio.h>
int main(){
char tipo;
float preço, preçoFinal;

printf("Digite o preço do produto:");
scanf("%f", &preço);

printf("Digite o tipo de produto:");
scanf(" %c", &tipo);

switch (tipo)
{
case 'A':
    preçoFinal = preço * 1.07;
    printf("Preço do produto com acréscimo é: %.2f\n", preçoFinal);
    break;
case 'B':
    preçoFinal = preço * 1.12;
    printf("Preço do produto com acréscimo é: %.2f\n", preçoFinal);
    break;
case 'C':
    preçoFinal = preço * 1.15;
    printf("Preço do produto com acréscimo é: %.2f\n", preçoFinal);
    break;
case 'D':
    preçoFinal = preço * 1.08;
    printf("Preço do produto com acréscimo é: %.2f\n", preçoFinal);
    break;

default:
    break;
}


}