#include<stdio.h>
#include<string.h>
int main(){
    struct books{
        char name[50];
        float price;
        int noofpage;
    }a,b,c;  //(variable because typedef nhi hai)

    a.price =  422.5; 
    a.noofpage = 100;
    // a.name[0] = 's';
    // a.name[1] = 'e';
    // a.name[2] = 'v';
    // a.name[3] = 'e';
    // a.name[4] = 'n';
    strcpy(a.name,"SECRET SEVEN");

    b.price =  524.5; 
    b.noofpage = 100;
    strcpy(b.name,"Rich DAD poor DAD");

    a.price =  422.5; 
    a.noofpage = 100;
    strcpy(c.name,"Famous Five");
    

    printf("%f\n",a.price);
    printf("%d\n",a.noofpage);
    printf("%s\n",a.name);
    
    printf("%f\n",b.price);
    printf("%d\n",b.noofpage);
    printf("%s\n",b.name);

    printf("%f\n",c.price);
    printf("%d\n",c.noofpage);
    printf("%s\n",c.name);

    return 0;
}