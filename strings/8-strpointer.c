//Implement : copy one string to another

#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "programing";
    // char* s2 = s1;  // s2 is shallow copy.
    // s1[0]='M';
    // printf("%s",s2);

//Deep copy

    char s2[] = "programing";
    s2[0] = 'M';
    printf("%s\n",s1);
    printf("%s\n",s2);
    printf("%p\n",s1);  //address are different call deep copy
    printf("%p\n",s2);


    return 0;
}

