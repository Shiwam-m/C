//Can we use string (character arrays) as pointer 

#include<stdio.h>
#include<string.h>
int main(){

    char str[] = "C programing language"; 
    char* ptr = str; 
    // char* ptr = &str[0];
    // printf("%s",str);
    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);
    // printf("%p\n",&str[0]);
    // printf("%p\n",str);  //str store always first add.
    printf("%p\n\n",ptr);
    printf("%p\n\n",ptr[0]);


    char sstr[] = "C programing language"; 
    char* sptr = sstr; 
    int i=0;
    // while (sstr[i]!='\0'){
    //     printf("%c",sstr[i]);
    //     i++;
    // // }

    // while (*sptr!='\0'){
    //     printf("%c",*sptr);
    //     sptr++;
    //     i++;
    // }
    

    return 0;
}