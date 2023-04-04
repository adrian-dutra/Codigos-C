#include<stdio.h>
#include<string.h>

int main(){
    char strA[100], strB[100];
    fgets(strA, 100, stdin);
    fgets(strB, 100, stdin);

    int lenA = strlen(strA) -1;
    int lenB = strlen(strB) -1;

    int count = 0;
    for (int i = 0; i < lenB - lenA + 1; i++) {
        if (strncmp(&strB[i], strA, lenA) == 0) {
            count++;
        }
    }
    printf("%d\n", count);
}