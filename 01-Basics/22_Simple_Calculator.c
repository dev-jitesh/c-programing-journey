/*
Project : Simple Calculator
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op)
    {
    case '+':
        printf("Result = %d", num1 + num2);
        break;

    case '-':
        printf("Result = %d", num1 - num2);
        break;

    case '*':
        printf("Result = %d", num1 * num2);
        break;

    case '/':
        printf("Result = %d", num1 / num2);
        break;

    default:
        printf("Invalid Input");
        break;
    }

    return 0;
}