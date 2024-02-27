//Another way to print string 

#include<stdio.h>
#include<string.h>
int main(){

    // char* ptr = "Programing language";
    // printf("%s",ptr);  // because entire string print. 
    // ptr++;
    // printf("%c",*ptr); //it can store first element address.--then print only one element (indivisual character)
    // ptr[0] = "C"; // Not change this is (read only); in

    // printf("\n\n\n\n");

    // // in normal initilisation we can modify indivisual characters only but not change entire string
    // char str[] = "programiZ";
    // str[0] = 'C';
    // printf("%s",str);



    // printf("\n\n\n\n");

    // // in pointer we can modify entire string but not the indivisual characters 

    // char* ptr = "programiZ";
    // ptr = "Programing";
    // printf("%s",ptr);

    char str[] = "Coding";
    // char* ptr = str;
    // ptr = "programing";
    char* p = str;
    *p ='p';
    printf("%s",str);

    return 0;
}