// print solid rectangle  
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter rows :");
    scanf("%d",&a);
    printf("Enter column :");
    scanf("%d",&b);
    for(int i=1;i<=a;i++){         //outer loop -> no of lines (like next line)(rows)
       for(int j=1;j<=b;j++){     //inner loop -> no of stars in each lines (column)
        printf("*");
       }
       printf("\n");
    }
    return 0;
}