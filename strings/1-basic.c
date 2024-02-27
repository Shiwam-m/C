//String is a charecter array //collection of charesters.
//ASCII value  A-65,a-97,  - (American Standard Code for Information Interchange)

//"dubble inverted comma value call cahrecter and every charecter has unique value"

#include<stdio.h>
int main(){
    
    // int a[4] = {1,2,3,4};
    // printf("%p\n",&a[0]);
    // printf("%p\n",&a[1]);
    // printf("%p\n",&a[2]);
    // printf("%p\n",&a[3]);

    // char arr[5] = {'a','t','l','a','s'};
    // printf("%c\n",&arr[0]);
    // printf("%p\n",&arr[0]);
    // printf("%p\n",&arr[1]);
    // printf("%p\n",&arr[2]);
    // printf("%p\n",&arr[3]);

    // char ch = 'A';
    // int x = (int)ch;  //type casting 
    // printf("%d",x);

    char ar[] = {1,2,3,4,5,6};
    char arr[] = {'H','e','l','l','o','w'};
    for(int i=0; i<=5; i++){
        printf("%c",arr[i]);
        // printf("%d",arr[i]);
    }

    return 0;
}