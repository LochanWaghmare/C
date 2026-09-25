#include<stdio.h>
int main()
{
    int num1,num2, result;
    char operator;
    printf("Enter the operation to be performed (+,-,*,/)");
    scanf("%c", &operator);
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);

    switch (operator){
        case '+':
        result=num1+num2;
        printf("The sum of %d and %d is %d",num1,num2,result);
        break;

        case '-':
        result=num1-num2;
        printf("the difference of %d and %d is %d",num1,num2,result);
        break;

        case '*':
        result=num1*num2;
        printf("the product of %d and %d is %d",num1,num2,result);
        break;

        case '/':

        if(num2!=0){
            result=num1/num2;
            printf("The quotient after dividing %d by %d is %d",num1,num2,result);
            break;
        }
        else
        {
            printf("Cannot divide by 0");
            break;
        }

        default :
        printf("invalid operator entered........");
        break;
    }
    return 0;
}
