#include<stdio.h>
#include <math.h>
#define max 100
int main(){

int vet[max], media = 0;
int n;
float media1, somatorio, resul;

    while(1){

        scanf("%d", &n);
        if(n <= 100){
            break;
        }
        else{
            printf("Quantidade excedida");
        }
    }

    for(int i = 0;i < n; i++){
        scanf("%d", &vet[i]);
        media += vet[i];
    }

    media1 = (float)media/n;
    float vet1[n];
    somatorio = 0;

    for(int j = 0; j < n;j++){
        vet1[j] = pow(vet[j] - media1, 2);
        somatorio += vet1[j];
    }
    somatorio = somatorio/n;
    
    resul = sqrt(somatorio);

    printf("%.2f\n", resul);

}