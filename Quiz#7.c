// 정수 배열과 배열의 길이를 인자로 받아, 배열에 저장된 값들의 평균을 반환하는 함수 double average(int[], int)

#include<stdio.h>

double average(int a[], int b){
    double temp = 0;

    for (int i = 0; i<b ; i++){
        temp += a[i];
    }
    return temp/b;
}

void main(){ 
    int c[10] = {10, 40, 30, 20, 5, 10 , 5, 1, 2, 3};
    double avr = average(c, 10);
    printf("배열 c의 평균값은 : %\n", avr);
}