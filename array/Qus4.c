// /*Find the maximum value out of all the element in the array 
//  searching the maximum element */
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     printf("How many number to find the maximum elements : ");
//     scanf("%d",&n);
//     int arr[n];
//     // int max = arr[0];/
//     int max = INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         printf("Enter %d Number : ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<=n-1;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//         printf("The Maximum number is  : %d ",max);
//     return 0;
// } 

// Find the Minimum value out of all the element in the array 
#include<stdio.h>
#include<limits.h>
 int main() {
    int n;
    printf("How many numbers to find the minimum element: ");
    scanf("%d",&n);
    int arr[n];
    int min = __INT_MAX__;

    for (int i = 0; i < n; i++) {
        printf("Enter %d Number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The Minimum number is: %d\n", min);
    return 0;
}



