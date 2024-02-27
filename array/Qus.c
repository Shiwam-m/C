//Given an array of marks of studens , if the marks of any student is less then 35 print its rool number .[Roll number here refers to the index of the array ]
#include<stdio.h>
int main( ){
   int n;
   printf("How many student : ");
   scanf("%d",&n);
   int marks[n];
   for(int i=0;i<=n-1;i++){
      printf("Enter student marks : ");
      scanf("%d",&marks[i]);
   }
   for(int i=0;i<=n-1;i++){
      if(marks[i]<35){
         printf("The marks of the index is : %d\n",i);
      }
      else{
          printf("The marks of the student is : %d\n",marks[i]);
      }
   }
   return 0;
}


//declearation 
#include<stdio.h>
int main(){
   int size = 10,b[size];
   return 0;
}