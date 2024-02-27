//WAP to take N number of integers as input and display them.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter a number of integer you want : ");
    scanf("%d",&n);
    int* ptr = (int*)malloc(n*sizeof(int));
    int* p = ptr;
    for(int i=1; i<=n; i++){
        scanf("%d",&(*ptr));
        ptr++; 
    }
    for(int i=1; i<=n; i++){
        printf("%d\n",(*p));
        p++; 
    }
    return 0;
}