#include<stdio.h>
int main(){
    int arr[5] = {2,3,4,5,6};
    arr[3] = 100;
    arr[4] = 50;
    arr[5] = 200; //this array is a bound of array 
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);

    float a[3] = {3.4 , 5.6 , 7.8 , 4.5};
    printf("%f\n",a[0]);
    printf("%f\n",a[1]);
    printf("%f\n",a[2]);
    printf("%f\n",a[3]);

    char b[4] = {'s','f','h','t'};
    printf("%c\n",b[0]);
    printf("%c\n",b[1]);
    printf("%c\n",b[2]);
    printf("%c\n",b[3]);

    int d[4];
    printf("Enetr number : ");
    scanf("%d",&d[0]);
    printf("Enetr number : ");
    scanf("%d",&d[1]);
    printf("Enetr number : ");
    scanf("%d",&d[2]);
    printf("Enetr number : ");
    scanf("%d",&d[3]);
    printf("Enetr number : ");
    scanf("%d",&d[4]);
    printf("%d %d %d %d %d\n\n",d[0],d[1],d[2],d[3],d[4]);

    int c[5] = {2,3,4,5,6};
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    } 


    return 0;
}