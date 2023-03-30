#include<stdio.h>
int main(){

    int n, cont;
    scanf("%d", &n);

    cont = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i + 1;j++){
            cont += 1;
            printf("%d ",cont);
        }
        printf("\n");
    }
}