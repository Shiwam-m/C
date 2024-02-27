#include<stdio.h>
#define PI 3.14159265359
float area(float r){
    return PI*r*r;
}

int main(){
    // printf("%.15f\n",PI);  //double datatype
    // printf("%.17LF\n",PI);  //long double

    printf("%f",area(5.3));

    return 0;
} 