#include<stdio.h>

int main() {
    int a = 25;
    int* x = &a;
    // *x = 7;
    int** y = &x;  //int** for storing the address of x
    int*** z = &y;

    printf("%p \n", &a);
    printf("%p \n", x);
    printf("%p \n", &x);
    printf("%p \n", y);
    printf("%d \n",*x);
    printf("%d \n",**y);
    printf("%d \n",***z);

    return 0;
}
