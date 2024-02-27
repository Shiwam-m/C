//HW deep copy
#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50];
    printf("Enter strings : ");
    scanf("%[^\n]s",&a);
    printf("You Enter : %s\n",a);
    printf("-----Deep copy-----\n");
    int i=0;
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
    }
    printf("Copy is : %s",b);

    return 0;
}
