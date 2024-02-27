//Create a structure 'person' having attributes as age and weight . assess its structure using pointers.

#include<stdio.h>
#include<string.h>
typedef struct person{
    int age;
    int weight;
}person;

void change(person *p){
    p->age = 22;
    p->weight = 50;
}

int main(){
    person a;
    a.age = 20;
    a.weight = 55;

    printf("%d\n",a.age);
    printf("%d\n\n",a.weight);

    change(&a);
    
    printf("%d\n",a.age);
    printf("%d\n\n",a.weight);

    return 0;
}