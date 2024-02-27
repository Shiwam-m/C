//array element are accessed using the subscript variables.-[0][1].
//in a structure are accessed using dot(.)-operator.
//(.)-dot operator is call "structure member operator".
//structure is use to creat a user define datatype in c.
//it is use to creat a complex data type which contain diverse information..


#include<stdio.h>
#include<string.h>
//new (datatype-student) has been created. 
struct student{ 
    int id;
    int marks;
    char feb_char;
    char name[30];
    };
// } harry,ravi,deepak; //we can creat this type of variable.
//this is global variable - access everywhere in code 
// struct student harry, ravi, deepak;

int main(){
    //this is local variable - access only main function.
   struct student harry, ravi, deepak;  //(haarry, ravi, deepak;).these are variables.
   harry.id = 1;
   ravi.id = 2;
   deepak.id = 3;
   harry.marks = 100;
   ravi.marks = 40;
   deepak.marks = 35;
   harry.feb_char = 'p';
   ravi.feb_char = 'p';
   deepak.feb_char = 'p';
   strcpy(harry.name,"harry potter");

   printf("Harry name is  : %s\n",harry.name);
   printf("Harry marks : %d\n",harry.marks);
   printf("ravi marks : %d\n",ravi.marks);
   printf("deepak marks : %d\n",deepak.marks);


    return 0;
}