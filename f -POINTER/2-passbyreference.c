// -----Pass by refrence------ 
#include<stdio.h>
void swap(int* a, int* b){   //a me *a) uska address se value lega.
    int temp = *a;           
    *a = *b;
    *b = temp;
    return;
}

int main(){

    int a = 2;
    int b = 9;

    swap(&a,&b);  
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
   
    return 0;
}

