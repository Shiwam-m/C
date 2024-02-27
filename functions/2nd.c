//return (means) terminated
#include<stdio.h>

void england(){
    printf("Yor are in england \n");
    return;
}

void australia(){
    printf("Yor are in australia \n");
    england();
    return;
}

void indian(){
    printf("Yor are in indian \n");
    australia();
    return;
}

int main(){
    indian();
    return 0;
}