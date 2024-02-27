
//features of structure 

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[15];

    } mon;
    mon a,b,c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name,"pokemon");

    // b.attack = a.attack;
    // b.hp = a.hp;
    // b.speed = a.speed;
    // strcpy(b.name,a.name);
    // printf("%d",b.attack);

    b = a; //direct store. (deep copy creat,b me change karne par a me nhi hoga)
    
    b.attack = 200;
    strcpy(b.name,"Venusaur");

    printf("%s\n",b.name);
    printf("%d\n",a.attack);
    printf("%d\n",b.attack);
   
    return 0;
}