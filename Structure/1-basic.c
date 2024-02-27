//user define datatype 
//It is a collection of object --itcontain different different data type --
//stracture is call {class}
#include<stdio.h>

int main(){

struct pokemen{  //user define data type
  int hp;     //hp attribute
  int speed;  //speed attribute and more 
  int attack;
  char tier;  //S,A,B,C
}pikachu,charizard;

  // struct pokemen pikachu; //(variable-pikachu) 
  printf("Eneter pikachu HP : ");
  scanf("%d",&pikachu.hp);
  // pikachu.hp     = 50;
  pikachu.speed  = 100;
  pikachu.attack = 60;
  pikachu.tier = 'A';
    
  // struct pokemen charizard;
  charizard.hp     = 80;
  charizard.speed  = 80;
  charizard.attack = 130;
  charizard.tier = 'S';

  printf("Pikachu HP is : %d \n",pikachu.hp);
  printf("Pikachu attackk is : %d \n",pikachu.attack);
  printf("Pikachu tier is : %c \n",pikachu.tier);
  printf("charizard attack is : %d \n",charizard.attack);
  printf("charizard tire is : %c \n",charizard.tier);

return 0;
}