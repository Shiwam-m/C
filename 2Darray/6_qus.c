//find the maximum & minimum element in 2D array 
// *Find the maximum value out of all the element in the array 
//  searching the maximum element */
#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    printf("Enter rows : ");
    scanf("%d",&n); 
    printf("Enter column : ");
    scanf("%d",&m);
    int arr[n][m];
    // int max = arr[0];
    int max = INT_MIN;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=n-1;i++){
         for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]){
            max = arr[i][j];
        }
    }      
    }
        printf("The Maximum number is  : %d ",max);
    return 0;
} 