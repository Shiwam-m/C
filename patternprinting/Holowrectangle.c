// print 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter rows :");
    scanf("%d",&a);
    printf("Enter column :");
    scanf("%d",&b);
    for(int i=1;i<=a;i++){         
        for(int j=1;j<=b;j++){      
            if(i==1 || j==1 || i==a || j==b){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}