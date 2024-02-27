// Given a matrix `a` of dimension n*m and 2 coordinates (i1,r1) and (i2,r2) . Return the sum of the rectangle from (i1,r1) to (i2,r2).
#include<stdio.h>
int main(){
    int n,m;
        printf("Enter i : ");
        scanf("%d",&n);
        printf("Enter j : ");
        scanf("%d",&m);
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m+1;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        int sum = 0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m+1;j++){
            sum+=arr[i][j];
            }
        }
            printf("Sum of numbers is : %d ",sum);
    return 0;
} 