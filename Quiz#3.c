// n이 소수인지 판별하시오

#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    
    int flag=0;
    for (int i=2; i<n/2+1; i++)
        if (n%i == 0)
            flag=1;

    if (flag)
        printf("소수가 아닙니다");
    else
        printf("소수입니다");
}
