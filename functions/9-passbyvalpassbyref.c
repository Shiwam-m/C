// // pass by value --
// #include<stdio.h>

// void swap(int a, int b){   //----Actual parameter---- //value is not change (call pass by value)
//     int temp = a;           //change only parameter not change main function values 
//     a = b;
//     b = a;
//     // a = a + b;
//     // b = a - b;
//     // a = a - b;
//     return;
// }

// int main(){

//     int a;
//     printf("Enter a : ");
//     scanf("%d",&a); 
//     int b;
//     printf("Enter b : ");
//     scanf("%d",&b); 
//     swap(a,b);   //formal parameter 
//     printf("The value of a is %d : \n",a);
//     printf("The value of b is %d : \n",b);
   
//     return 0;
// }


// -----Pass by refrence------ 
#include<stdio.h>
void swap(int* a, int* b){   //*a me *(*a) uska address se value lega.
    int temp = *a;           
    *a = *b;
    *b = temp;
    return;
}

int main(){

    int a = 2;
    int b = 4;

    swap(&a,&b);  
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
   
    return 0;
}