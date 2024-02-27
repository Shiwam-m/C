#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct day{
            int date;
            int month;
            int year;
    }day;

    day a,b;
    a.date  = 06;
    a.month = 06;
    a.year = 2001;
    
    b.date  = 06;
    b.month = 06;
    b.year = 2005;

    //not compair two user define structure 
    // if(a==b) printf("The date or same"); 

    // if(a.date==b.date) 
    // printf("The date or same");
    // else printf("The dates  are different"); 

    bool flag = true;
    if(a.date==b.date) flag = true;
    if(a.month==b.month) flag = true;
    if(a.year==b.year) flag = true;

    if (flag == false ) printf("The date or same");
    else printf("The dates  are different"); 

    return 0;
}