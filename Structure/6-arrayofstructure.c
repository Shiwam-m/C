//Array of structure

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[15];

    } mon; //(means struct pokemon => ka alternat because typedef hai)

    // mon arr[3];  //arr[0], arr[1]----arr[2]
    // arr[0].attack = 150;
    // arr[0].hp = 100;
    // arr[0].speed = 200;
    // arr[0].tier = 'A';
    // strcpy(arr[0].name,"charizrd");

    // arr[1].attack = 150;
    // arr[1].hp = 100;
    // arr[1].speed = 200;
    // arr[1].tier = 'b';
    // strcpy(arr[1].name,"Mewto");

    // arr[2].attack = 150;
    // arr[2].hp = 100;
    // arr[2].speed = 200;
    // arr[2].tier = 'c';
    // strcpy(arr[2].name,"pikacho");

    // for(int i=0; i<=2; i++){
    //     printf("Name : %s\n",arr[i].name);
    //     printf("Attack : %d\n",arr[i].attack);
    //     printf("Hp : %d\n",arr[i].hp);
    //     printf("Speed : %d\n",arr[i].speed);
    //     printf("Tier : %c\n",arr[i].tier);
    // }

    //Input from user
    mon arr[3]; //arr[0]--is use 5 elements 
    for(int i=0; i<=2; i++){
        printf("Enter name : ");
        scanf("%s",&arr[i].name);
    }
    for(int i=0; i<=2; i++){
        printf("Enter attack : ");
        scanf("%d",&arr[i].attack);
    }
    for(int i=0; i<=2; i++){
        printf("Enter hp : ");
        scanf("%d",&arr[i].hp);
    }
    for(int i=0; i<=2; i++){
        printf("Enter speed : ");
        scanf("%d",&arr[i].speed);
    }
     for(int i=0; i<=2; i++){
        printf("Name : %s\n",arr[i].name);
        printf("Attack : %d\n",arr[i].attack);
        printf("Hp : %d\n",arr[i].hp);
        printf("Speed : %d\n",arr[i].speed);
        printf("Tier : %c\n",arr[i].tier);
    }
    


    return 0;
}