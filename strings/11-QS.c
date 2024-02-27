//Write a function to insert a new charactors in a string at a given position 

#include<stdio.h>
#include<string.h>
int main(){

    char str[] = "collage";
    printf("%s\n",str);
    //2nd index = 'l'
    for(int i=6; i>=2; i--){
        str[i+1]=str[i];
        }
        str[2] = 'k';
        printf("%s",str);

    return 0;
}