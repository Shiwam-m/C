//function is use to avoide repetation task .
//Any code start with main function.
//Function is use DRY pricipal (Do not repeat your self)
#include<stdio.h>

void greet(){
    printf("Good morning \n");
    printf("How are you \n");
    return;
}

int main(){
    for(int i=1; i<=10; i++){
        printf("hellow world\n");
        greet();
    } 

    return 0;
}