//Given array of integers with 1 to n elements and the size of the array is n+1. one element is occuring more then once i.e duplicate number is present find the duplicate element 

#include<stdio.h>

int main(){
    int n;
    printf("How may element you want to enter : ");
    scanf("%d",&n);
    int arr[n]; 
    for(int i=0; i<n; i++){
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[i]==arr[j]){
            printf("Dublecate element is : ",arr[i]);
            break;
            }
            else{
            printf("Dublecate element not present ");   
            }
        }
    }
    // for(int i=0; i<n; i++){
    //     printf(" %d ",arr[i]);
    // }

    return 0;
}