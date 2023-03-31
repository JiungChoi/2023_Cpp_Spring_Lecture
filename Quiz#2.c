// n의 약수를 출력하시오

#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    
    printf("약수 : ");
    for (int i=1; i<n+1; i++)
        if (n%i ==0)    
            printf("%d\t", i);
}