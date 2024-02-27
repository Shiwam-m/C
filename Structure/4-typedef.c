//typedef is use to creat a additionl name for another datatype . but does not creat a new type  
#include<stdio.h>
typedef float realnumber; 
typedef int Integer; 

int main(){
    Integer x = 22;
    realnumber y = 3.1415;
    printf("%f\n",y);
    printf("%d\n",x);

    return 0;
}