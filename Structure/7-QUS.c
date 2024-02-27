//A record contain name of the crickertr, his age, number of test mathes that he has played and the average runs that he has sorced in each matchs . creat a structure to hold records of 20 such cricketer and then write a program to read these records.

//avrage = (sum of all observation/total number of observation)

#include<stdio.h>
#include<string.h>
int main(){
typedef struct cricketer{
        char name[50];
        int age;
        int nooftest;
        float avrage;
    }cricketer;

    cricketer arr[20];
    for(int i=1; i<=3; i++){
        printf("Enter %d cricketer name : ",i);
        scanf("%s",&arr[i].name);
        printf("Enter age : ",i);
        scanf("%d",&arr[i].age);
        printf("Enter number of maches : ",i);
        scanf("%d",&arr[i].nooftest);
        printf("Avrage mathes: ");
        scanf("%f\n",&arr[i].avrage);
    }
   
    for(int i=1; i<=3; i++){
        printf(" Name : %s\n",arr[i].name);
        printf(" Age : %d\n",arr[i].age);
        printf(" Number of matches playes : %d\n",arr[i].nooftest);
        printf(" Avragee : %f\n\n",arr[i].avrage);
    }
   
    return 0;
}