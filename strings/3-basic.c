//2nd way to initialization strings.
#include<stdio.h>
int main(){

    char ar[] = "Hellow";    
    int i=0;
    while (i<5){
        printf("%c ",ar[i]);
        i++;
    }


    printf("\n------\n");


    // char arr[] = "Hellow students\0";     
    //char arr[] = {'H','e','l','l','o','w','\0'}; //computer not put auto '\0'   //7 byte
    char arr[] = "Hellow students";     //computer automatic put '\0'             //16(one space + extra(\0))
    arr[0] = 'M';
    arr[1] = 97;
    int j=0;
    while (arr[j]!='\0'){
        printf("%c ",arr[j]); //standart printing.
        // printf("%c ",j[arr]);
        // printf("%c ",*(arr+j));
        // printf("%c ",*(j+arr));
        j++;
    }
    printf("\n%c\n",arr[1]);

    
   return 0;
}

    