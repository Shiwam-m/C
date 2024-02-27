//Memory de-allocation
// allocate then memory allocate hoga--(free)deallocate means ab kuch aur bhi store ho sakta hai allocation pe ise liye de-allocate karte hai.- ise liye pointer ko null set kar dete hai nhi to whi point karta rhega.  
#include<stdio.h>
#include<stdlib.h>
int main(){
    //null pointer
    // int* ptr = NULL;
    // printf("%p",ptr);
    int* ptr = (int*)calloc(10,4);
    int* p = ptr;
    ptr++;
    free(p); //first address free means all memory blocks free
    printf("%d",p); //print garbage value 
    return 0;
}