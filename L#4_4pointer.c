#include<stido.h>

// Call by value
void swap1(int a, int b) {
    int temp = a; a = b; b = temp;
}

// Call by address
void swap2(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int main(){
    int x=10, y=20;
    printf("x = %d, y= %d \n", x, y);
    swap1(x, y);
    printf("x = %d, y= %d \n", x, y);
    swap2(&x, &y);
    printf("x = %d, y= %d \n", x, y);
}