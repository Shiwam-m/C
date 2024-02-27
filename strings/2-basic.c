//Null charecters -'(\0)' - is consider single charecters (ASCII Value = 0) -- (and 0 ascii value = 48;)
//Null char-does not print

#include<stdio.h>
int main(){
    char arr[] = {'H','e','l','l','o','w','\0'};
    // char arr[] = {'H','e','l','l','o','w','!'};
    // char ch = '\0';
    // printf("%c",ch);
    // printf("%d",ch);

    // int x = 0;
    // char a = (char)x; //'\0'
    // printf("%c",a);

    int i=0;
    while (arr[i]!='\0'){
    // while (arr[i]!='!'){
        printf("%c ",arr[i]);
        i++;
    }
    


    return 0;
}