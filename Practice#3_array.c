// 배열의 원소들의 합을 구하는 코드

#include<stdio.h>

void main(){
    int arr[5];
    arr[0] = 10; arr[1] = 20; arr[2] = 30; 
    arr[3] = 40; arr[4] = NULL;
    
    int sum = 0;
    for (int* j = arr; *j != NULL ; j++){
        printf("%d\t", *j);
        sum += *j;
    }
    printf("\n\nSum : %d", sum);
}