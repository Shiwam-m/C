// #include<stdio.h>
// int main(){
//     // int arr[2][2] = {{1,2},{3,4}};
//     int arr[2][2];
//     arr[0][0] = 1; 
//     arr[0][1] = 2; 
//     arr[1][0] = 3; 
//     arr[1][1] = 4; 
//     // 1 2 
//     // 3 4
//     printf("%d\n",arr[0][0]);
//     printf("%d\n",arr[0][1]);
//     printf("%d\n",arr[1][0]);
//     printf("%d\n",arr[1][1]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[2][2] = {{1,2},{3,4}};
//     for(int i=0,j=0;i<=2,j<=2;i++,j++){
//         printf("%d ",arr[i][j]);
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
        printf("\n");
    }
    return 0;
}
