/*
Project : Menu-Driven Calculator
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, choice, Result;

    printf("===== Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first nubmer: ");
    scanf("%d", &num1);

    printf("Enter second nubmer: ");
    scanf("%d", &num2);

    switch (choice)
    {
    case 1:
        Result = num1 + num2;
        break;

    case 2:
        Result = num1 - num2;
        break;

    case 3:
        Result = num1 * num2;
        break;

    case 4:
        Result = num1 / num2;
        break;

    default:
        printf("Invalid Input");
        break;
    }

    printf("The result is: %d", Result);

    return 0;
}