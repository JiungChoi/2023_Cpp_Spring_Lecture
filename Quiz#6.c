// 정수형 배열과 배열의 크기를 매개변수로 배열에서 가장 큰 수를 반환하는 함수 int max(int[], int)를 작성하시오

#include<stdio.h>

int max(int a[], int b){
    int temp = a[0];

    for (int i = 1; i<b ; i++){
        if (a[i]>temp){
            temp = a[i];
        }
    }
    return temp;
}

void main(){ 
    int c[10] = {10, 40, 30, 20, 5, 10 , 5, 1, 2, 3};
    int mx = max(c, 10);
    printf("배열 c에서 가장 큰 값은 : %d\n", mx);
}
