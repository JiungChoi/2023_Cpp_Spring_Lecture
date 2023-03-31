// 369 게임 출력하기

#include<stdio.h>
void main(){
    printf("369 369~ 369 369~\n");
    
    for (int i=1; i<100; i++)
        if (i%3==0)
            printf("* ");
        else if (i>10 && (i/10)%3==0)
            printf("* ");
        else if (i>10 && (i%10)%3==0)
            printf("* ");
        else
            printf("%d ", i);

    
}
