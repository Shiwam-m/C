//Freature of structure in pointer 

#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;
int main(){
    pokemon pikachu;
    pikachu.hp = 60; 
    // pikachu.attack = 70;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name,"Pikachu");

    pokemon* x = &pikachu; //x variable is always store 1 value address 
    // printf("%p\n",&pikachu.hp);
    // printf("%p\n",&pikachu.attack);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",pikachu.name);
    // printf("%p",x);

    // int q = 4;  //basic previous.
    // int* p = &q;
    // *p = 7;
    // printf("%d",q);

    // *x.hp = 70; //wrong way 
    (*x).hp = 70;
    (*x).attack = 80;
    printf("%d\n",pikachu.hp);
    printf("%d",pikachu.attack);


    return 0;
}