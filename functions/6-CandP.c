// combination and Permunatio 
//      n!        -ncr-
//   r!*(n-r)!
// permutation formula
//      n!
//    (n-r)!


#include<stdio.h>

int main(){

    int n;
    printf("Enter n : ");
    scanf("%d",&n);  
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int nfact = 1;
    int rfact = 1;
    int nrfact = 1;

    for(int i=1; i<=n; i++){
        nfact = nfact*i;
    }
    for(int i=1; i<=r; i++){
        rfact = rfact*i;
    }
    for(int i=1; i<=n-r; i++){
        nrfact = nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);

    return 0;
}


// using function 

#include<stdio.h>

int factorial(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n); 
    int r;
    printf("Enter r : ");
    scanf("%d",&r);

    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);

    // int a = factorial(4);
    // printf("%d",a);

    return 0;
}


//Pascal trangal using function
#include<stdio.h>

int factorial(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main(){

    int n;
    printf("Enter n : ");
    scanf("%d",&n); 
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
   
    int ncr = combination(n,r);
    printf("%d",ncr);

    return 0;
}


