// 부터 n까지 짝수의 합을 구하시오

#include<stdio.h>
void main(){
    int n;
    int sum=0;
    scanf("%d", &n);
    
    for (int i=0; i<n+1; i++)
        if (i%2 ==0)
            sum += i;

    printf("%d", sum);
}