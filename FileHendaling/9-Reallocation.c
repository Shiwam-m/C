//Memory reallocation - It is use to dynamically change the memory allocation of a previously allocated memory 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*)malloc(10*4);
    printf("%p\n",ptr);
    ptr = realloc(ptr,20*4);  
    printf("%p",ptr);
    
    // when memory free then memory contiguous lega otherwise jha free memory hoga wha yek sath jake memory allocate krega 
    return 0;
}