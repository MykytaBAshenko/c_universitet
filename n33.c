#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
 #include <math.h>

int main()
{
    int num1,num2;
    float result;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            break;
             
        case '%':
            result=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
    return 0;
}
/* 
mbashenko-NAU-151

clang n33.c -o task.out

*/
