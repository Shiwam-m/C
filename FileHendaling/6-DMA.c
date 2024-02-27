//(*)--> refrence operator
//Operation for dynamic allocation --
// --Memory allocation--
// to allocate memory in heap 
// --->malloc(),calloc()

// --Memory Re-allocation--
// to change the amount of memory allocated
// --->relloc()

//--Memory Deallocation--
// to deallocate the trapped memory
// -->free()

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    // int a = sizeof(int);
    // int a = sizeof(float);
    // int a = sizeof(long);
    // int a = sizeof(double);
    // int a = sizeof(char);
    // int a = sizeof(bool);
    // printf("%d",a);
    
    int* ptr = (int*)malloc(10*4);  //10(integers--|4byte|4byte|-|||||||- with 4-4 bytes)
    printf("%d\n",*ptr);
    float* pt = (float*)malloc(10*(sizeof(float))); 
    printf("%f\n",*pt);
    ptr++; //next integer |Next(integer||Next(integer|4byte|-|||||||



    return 0;
}