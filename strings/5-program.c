
//Take inputs and take reverse 

#include<stdio.h>
#include<string.h>
int main(){

    char str[15];
    printf("Enter string : ");
    scanf("%[^\n]s",str);
    // printf("The reverse is : %s ",str);
    // puts(str);  //give automatic next line(\n)

    // printf("The size of is : ");
    //Size
    int size = 0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    // printf("%d",k);
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse strings is : ");
    puts(str);

    return 0;
}