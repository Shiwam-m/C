//nesting structure 
//structure element store is a continuous memory aallocation.

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Books{
        char name[50];
        float price;
        int noofpage;
    }book,name;
    //struct book = (a);

    name a; 
    name b; 
    name c ; 

    book ab;
    book bc;
    book ca;

    a.price =  422.5; 
    a.noofpage = 100;
    strcpy(a.name,"Famous Five");

    b.price =  524.5; 
    b.noofpage = 100;
    strcpy(b.name,"Rich DAD poor DAD");

    ab.price = 1000; 
    bc.noofpage = 200;
    strcpy(ca.name,"Rich DAD");

    printf("%f\n",a.price);
    printf("%d\n",a.noofpage);
    printf("%s\n",a.name);
    
    printf("%f\n",b.price);
    printf("%d\n",b.noofpage);
    printf("%s\n",b.name);
    
    printf("%f\n",ab.price);
    printf("%d\n",bc.noofpage);
    printf("%s\n",ca.name);
    

    return 0;
}