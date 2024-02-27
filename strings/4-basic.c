//Input and output of string without loops -- 
//puts()--use for print , gets()--use for scan.

#include<stdio.h>
#include<string.h>
int main(){

    // char str[] = "C programing";
    // printf("%s",str);

    // puts("\nHellow programing\n\n");
    // puts(str);

    char str2[40];
    // scanf("%s",str2); //only first word consider
    // printf("Your input was : %s\n",str2);

    scanf("%[^\n]s",str2);
    // gets(str2);  //entire sentence can be inputs..
    printf("Your input was : %s",str2);
  

    return 0;
}