//nesting structure with another structure 

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct pokemon{
            int hp;
            int speed;
            int attack;
            char tier;
            int name[15];
    }pokomo;
    typedef struct legendarpokemon{
        pokomo normal; 
        char ability[10];
    }legendarpokemon;

    typedef struct godpokomon{
        legendarpokemon legender;
        int specialattack;
    }godpokomon;

    godpokomon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legender.ability,"stone");
    arceus.legender.normal.attack = 200;


    legendarpokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp = 100;
    mewtwo.normal.attack = 180;
    mewtwo.normal.speed = 200;
    mewtwo.normal.tier = 'A';

    printf("%s\n",mewtwo.ability);
    printf("%d\n",mewtwo.normal.hp);
    printf("%d\n",mewtwo.normal.attack);
    printf("%d\n",mewtwo.normal.speed);
    printf("%c\n\n",mewtwo.normal.tier);

    printf("%s\n",arceus.legender.ability);
    printf("%d\n",arceus.legender.normal.attack);

    




    return 0;
}