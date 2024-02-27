//this is the difference b|w int and array
//array is change to be reference => but int is change (value) or (reference)
#include<stdio.h>
void fun(int arr[]){
    arr[0] = 10;
    return;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
} 


//int 
#include<stdio.h>
void fun(int a){
    a = 10;
    return;
}
int main(){
    int n = 5;
    printf("%d\n",n);
    fun(n);
    printf("%d\n",n);
    return 0;
} 


//swap of two numbers in array
#include<stdio.h>
void fun(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main(){
    int arr[2] = {9,2};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
} 


























