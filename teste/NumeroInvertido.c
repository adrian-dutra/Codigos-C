#include<stdio.h>
#include<stdlib.h>
int main(){

int x, resto, inv;
scanf("%d", &x);
inv = 0;
while (x > 0)
{
    resto = x % 10;
    inv = inv * 10 + resto;
    x = (int)x / 10;
}

printf("O número invertido: %d\n", inv);

}