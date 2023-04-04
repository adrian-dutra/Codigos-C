#include<stdio.h>
#include <math.h>
int main(){
    int n, cont, cont1, cont2, cont3;
    n = 10;
    int mat[n];
    for(int i=0; i<=10; i++){
        for(int j=0; j<=3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    for(int i=0; i<=10; i++){
        int maior = 0;
        cont = 0;
        for(int j=0; j<=3; j++){
            if(mat[j] > maior){
                maior = mat[j];
                cont++;
            }
            if(cont == 1){
                cont1++;
            }
            if(cont == 2){
                cont2++;
            }
            if(cont == 3){
                cont3++;
            }
        }
    }

    printf("%d %d %d\n", cont1, cont2, cont3);
}