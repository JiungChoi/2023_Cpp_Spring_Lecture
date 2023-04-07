// (23.04.07)

#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

float div(int a, int b){
    return (double)a/b;
}

int modular(int a, int b){
    return a%b;
}


void main(){
    int n1 =10, n2=20;
    printf("n1 + n2 = %d\n", add(n1, n2));
    printf("n1 - n2 = %d\n", sub(n1, n2));
    printf("n1 * n2 = %d\n", mul(n1, n2));
    printf("n1 / n2 = %d\n", div(n1, n2));
    printf("n1 %% n2 = %d\n", modular(n1, n2));
}