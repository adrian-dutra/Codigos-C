#include<stdio.h>
int main(){

    int n, cont, resul;
    scanf("%d", &n);

    while(1){
        if(n >= 100){
            printf("tamanho excedido");
        }
        else{
            break;
        }
    }

    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    cont = 0;
    for(int j = 0; j < n-1; j++){
        for(int i = j;i < n-1;i++){
            if(vet[j]==vet[i+1]){
                cont++;
                
            }
        }
    }
    resul = n - cont;
    printf("%d\n", resul);
}
