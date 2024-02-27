#include<stdio.h>
int main(){
    int r;
    printf("Enetr r : ");
    scanf("%d",&r);
    int c;
    printf("Enetr c : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter %d %d Index element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// #include<stdio.h>
// int main(){
//     int arr[][3] = {{1,2,3},{4,5,6}};  //[]value is consider 2 
//     printf("%d",arr[0][0]);
//     printf("%d",arr[0][1]);
//     printf("%d",arr[0][2]);
//     printf("%d",arr[1][1]);
//     printf("%d",arr[1][2]);

//     return 0;
// }