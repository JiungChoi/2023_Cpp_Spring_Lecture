// (23.04.07) 전역변수 이해

#include<stdio.h>

int gCount = 1;
void gCountUp(){
    gCount++;
}

void g_CountSquare(){
    gCount = gCount * gCount;
}


void main(){
    printf("gCountUp() 호출 전 전역변수의 값은 %d\n", gCount);
    gCountUp();
    printf("gCountUp() 호출 전 전역변수의 값은 %d\n", gCount);
    g_CountSquare();
    printf("gCountUp() 호출 전 전역변수의 값은 %d\n", gCount);
    
}