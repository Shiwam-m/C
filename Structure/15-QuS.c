//structure and union 
//only on emember can be use at a time 
//use memory ke bachane ke liye
//jab memory ke under store hota hai first value ko erase kar deta hai.

#include<stdio.h>
#include<string.h>
typedef union pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
// structure take = 28 byte __4,4(integer) -- 1 charecter 
//union take bigest byte only = 15 (because = name[15])

}pokemon;

int main(){

    pokemon pikachu;
    pikachu.hp = 60; 
    pikachu.attack = 70;
    pikachu.tier = 'A';
    pikachu.speed = 100;
    strcpy(pikachu.name,"Pikachu");
    //union last value ke size ke hisab se print karta hai 

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

    return 0;
}