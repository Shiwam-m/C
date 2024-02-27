//Pointer -- is store address of the variable 

#include<stdio.h>

int main(){

    int a = 5;
    int b = 4;
    printf("\n%d\n",a);
    printf("%p\n",&a);  // - %p -- for print address
    printf("%p\n\n",&b); //--&-- means address --- use to store value in address.

    int *x = &a;
    printf("%p\n",x);
    printf("%p\n\n",&x);

    int c = 5;
    int* y = &c;
    printf("%d\n\n",*y);

    int d = 25;
    int* z;
    // *z = &d; -- this is wrong
    z = &d;
    printf("%p\n",z);
    printf("%p\n",&d);
    printf("%d\n\n",*z);
    
    int e = 25;
    int* v = &e;
    *v = 7;
    printf("%d\n\n",e);

    return 0;
}
