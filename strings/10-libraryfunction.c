//useful functiom for c already in standard library!
//library funcitons (strings)

#include<stdio.h>
#include<string.h>
int main(){

    char* str = "programing in c";
    int x = strlen(str);  //Return the length of the string 
    printf("%d",x);

    

    // char s1[16] = "programing in c";
    // char s2[16];
    // strcpy(s2,s1);  //deep copy 
    // // s2[0] = 'M';
    // printf("%s",s2); 

  
    //Concat s2 in s1.
    char s1[16] = "programing in c";
    char s2[20] = "Computer progrmming";
    strcat(s1,s2);
    printf("%s\n",s1); 
    printf("%s",s2); 


    // //compair the two strings 
    // char s1[16] = "programing in c";
    // char s2[20] = "Computer progrmming";
    // int t = strcmp(s1,s2);
    // printf("%d",t); 


    return 0;
}