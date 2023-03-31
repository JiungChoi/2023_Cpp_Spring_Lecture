#include<stdio.h>

void main(){
    for (int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(j%2== (i%2))
                printf("* ");
            else
                printf("- ");
        }printf("\n");
    }
}