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

void change(pokemon *p){
    p->hp = 30;
    p->attack = 30;
    p->speed = 40;
    p->tier = 'S';
    strcpy(p->name,"koo");
    // (*p).hp = 30;
    // (*p).attack = 30;
    // (*p).speed = 40;
    // (*p).tier = 'S';
    // strcpy((*p).name,"koo");
    return;
}

int main(){

    //initilization in one line. (value store sequence order)
    // pokemon pikachu = {60,100,70};
    pokemon pikachu = {60,100,70,'A',"pikachu"};
    
    // pokemon pikachu;
    // pikachu.hp = 60; 
    // pikachu.attack = 70;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    return 0;
}