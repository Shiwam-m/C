//print same number
#include<stdio.h>
int main(){
   int arr[5];
   for(int i=0;i<=4;i++){
   printf("Enetr %d element  : ",i+1);
   scanf("%d",&arr[i]);
   }
   for(int i=0;i<=4;i++){
      printf("%d ",arr[i]);
   }
   return 0;
}



//Reverse of the number 
#include<stdio.h>
int main(){
   int arr[5];
   for(int i=0;i<=4;i++){
   printf("Enetr %d element  : ",i+1);
   scanf("%d",&arr[i]);
   }
   for(int i=4;i>=0;i--){
      printf("%d ",arr[i]);
   }
   return 0;
}