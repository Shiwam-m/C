//build in fuction - or - Pre define function
//Call - library function ,printf() , scanf() these are function to print and take input from user.
#include<stdio.h>
#include<math.h>

int main(){

    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("The square root is : %d \n",root);
    int q = pow(2,6);
    printf("power is : %d ",q);



    return 0; 
}

