// // print Square number
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter rows :");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){       
       for(int i=1;i<=a;i++){     
        printf("%d ",i);
       }
       printf("\n");
    }
    return 0;
}

//This is a write way to write this code 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter rows :");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){       
       for(int j=1;j<=a;j++){     
        printf("%d ",j);
       }
       printf("\n");
    }
    return 0;
}