#include<stdio.h>

int sum(int a , int b){  //(pass by value)
// int sum(int x , int y){ 
    return a+b; //(7)return integer(retur type integer)
}

int main(){

    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    sum(a,b);
    printf("Sum of two numbers is : %d ",a+b);


    return 0; //(nothing return then 0)
}

