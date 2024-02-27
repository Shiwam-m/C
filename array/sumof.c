//calculate the sum of all the element of array 
#include<stdio.h>
int main(){
    int n;
    printf("How many number added : ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0;i<=n-1;i++){
        printf("Enter number : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        sum+=arr[i];
    }
        printf("The sum of the number is : %d ",sum);
    return 0;
}

//Calculate the product of all the elements in the given array 
#include<stdio.h>
int main(){
    int n;
    printf("How many number Multiply : ");
    scanf("%d",&n);
    int arr[n];
    int sum = 1;
    for(int i=0;i<=n-1;i++){
        printf("Enter number : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        sum*=arr[i];
    }
        printf("The sum of the number is : %d ",sum);
    return 0;
}