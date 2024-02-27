//if print only first line
//while print all line
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    // FILE* ptr = fopen("shiwam.txt","r");
    // char str[100];
    // // while(fgets(str,100,ptr)!=NULL)  
    // //     printf("%s",str);
    // if(fgets(str,10,ptr)!=NULL) //fgets for read//fputs for write
    //     printf("%s",str);

    //creating a file 
    // FILE* ptr = fopen("shiv.txt","w");

    //write something
    FILE* ptr = fopen("shiv.txt","w");
    char str[] = "Goal";
    fputs(str,ptr);
    fclose(ptr);


    return 0;
}