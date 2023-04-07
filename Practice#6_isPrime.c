// (23.04.07)

#include<stdio.h>

int isPrime(int n){
    int flag=0;
    for (int i=2; i<n/2+1; i++)
        if (n%i == 0)
            flag=1;

    if (flag){
        printf("%d는 소수가 아닙니다\n", n);
        return 0;
    }
    else{
        printf("%d는 소수입니다\n", n);
        return 1;
    }
        
}


void main(){
    int n1 =5, n2=20;
    isPrime(n1); isPrime(n2);
    
}