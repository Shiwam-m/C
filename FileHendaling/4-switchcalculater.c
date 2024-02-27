#include<stdio.h>

int main() {
    int a;
    printf("Enter first number : ");
    scanf("%d", &a);

    char ch;
    printf("Enter Expression +, -, *, / : ");
    scanf(" %c", &ch);  // Use %c for character input

    int b;
    printf("Enter second number : ");
    scanf("%d", &b);

    // if (ch == '+')
    //     printf("%d", a + b);
    // else if (ch == '-')
    //     printf("%d", a - b);
    // else if (ch == '*')
    //     printf("%d", a * b);
    // else if (ch == '/')
    //     printf("%f", (float)a / b);
    // else
    //     printf("Invalid operator");

  switch(ch){
        case '+' :
        printf("%d",a+b);
        break;
        case '-' :
        printf("%d",a-b);
        break;
        case '*' :
        printf("%d",a*b);
        break;
        case '/' :
        printf("%d",a/b);
        break;
        default :
        printf("Your expression is not valid ");
    }
    
    return 0;
}

    
  
