// 문자 하나를 매개변수로 받아 대문자이면 1 아니면 0을 반환하는 함수 int isUpper(char c)를 작성

#include<stdio.h>

int isUpper(char c){
    c = (int)c;
    int flag = 0;

    if ((c>=65) && (c<=90)){
        flag = 1;
    } else if ((c>=97) && (c<=122)){
        flag = 0;
    } else {
        printf("잘못 된 문자");
    }

    return flag;
}

void main(){ 

    char input = "A";
    while (1)
    {
        printf("문자를 입력해주세요 : "); scanf(" %c", &input);

        if ((int)input == 113){ break;}
        if (isUpper(input)){
            printf("대문자입니다\n");
        } else {
            printf("소문자입니다\n");
        }
    }
    
    
}