//Multiple pointer declaration problem

#include<stdio.h>
typedef int* pointer;

int main(){
//    int x = 5,y = 7; 
//    int* a = &x;
//    int* b = &y;
// -- int* a = &x, b = &y; // (int*x) & int-y.
//   printf("%p\n",a);
//    printf("%p\n",b);

    int x = 5, y = 7;
    //typedef - this consider both value pointer
    pointer a = &x, b = &y;
    printf("%p\n",a);
    printf("%p\n",b);

    return 0;
}