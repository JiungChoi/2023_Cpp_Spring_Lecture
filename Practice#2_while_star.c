#include<stdio.h>

void main(){
    for (int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i+j==9 || i==j)
                printf("* ");
            else
                printf("- ");
        }printf("\n");
    }
}