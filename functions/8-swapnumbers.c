//swap number using third variable 
//swap number without using third variable 

#include<stdio.h>

void swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){

    int a;
    printf("Enter a : ");
    scanf("%d",&a); 
    int b;
    printf("Enter b : ");
    scanf("%d",&b); 
    int temp = a;
    a = b;
    b = temp;
    printf("The value of a is %d : \n",a);
    printf("The value of b is %d : \n",b);
    
    swap(a,b);
    printf("The value of a is %d : \n",a);
    printf("The value of b is %d :\n",b);

    return 0;
}