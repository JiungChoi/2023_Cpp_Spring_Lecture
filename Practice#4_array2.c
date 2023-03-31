// 배열의 원소들의 합을 구하는 코드

#include<stdio.h>

void main(){
    char a[5][5];
    char c = 'A';
    
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++)
            a[i][j] = c++;
    }
    
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++)
            printf("%c ", a[i][j]);
        printf("\n");
    }
}