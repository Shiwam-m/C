//A structure variable can be passed to a function

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;

void fun(pokemon p){
    printf("%d",p.hp);
    return;
}

void change(pokemon p){ // pass by value only -> copy creat 
    p.hp = 70;
    p.attack = 110;
    p.speed = 190;
}

int main(){  
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 120; 
    pikachu.speed = 200;
    // fun(pikachu);
    change(pikachu);

    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);

    return 0;
}

