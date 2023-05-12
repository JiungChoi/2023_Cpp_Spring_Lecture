#include "stdio.h"

int main(){
    int a[10];
    int * p = a;
    for (int i ; i<10 ; i++) p[i] = i+1;
    for (int i ; i<10 ; i++) printf("a[%d] = %d \n", i, a[i]);
    
    return 0;

}
