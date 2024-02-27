#include<stdio.h>
#include<string.h>
int main(){

   int arr[] = {11,22,33,44};
   int* ptr = arr;
   printf("%p\n",ptr); 
   printf("%p\n",arr[0]); 

    return 0;
}