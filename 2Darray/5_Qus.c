//find the sum of a given matrix of n*m
#include<stdio.h>
int main(){
    int r;
    printf("Enter row : ");
    scanf("%d",&r);    
    int c;
    printf("Enter column : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           sum+=arr[i][j];
        }
    }
    printf("Sum is of the given matrix is : %d ",sum);
    return 0;
}