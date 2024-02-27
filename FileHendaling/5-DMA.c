//Dynamic memory allocation
//static - means memory allocated during compile time.
//Dynamic - means memory allocated suring run time.
//heap segment os the memory is the free momery which is avalible to any program . it is a large memory space avaiable where dynamic allocation usally take pace 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    // int arr[n];
    int* arr = new int [n];--------------dfdsSDFGFSDddsdg
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}