/*
Author : Jitesh
Prrogram : Calculator Switch
*/

#include <stdio.h>

int main(void)
{
    float a, b;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator(+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (operator)
    {
    case '+':
        printf("Result = %.2f\n", a + b);
        break;

    case '-':
        printf("Result = %.2f\n", a - b);
        break;

    case '*':
        printf("Result = %.2f\n", a * b);
        break;

    case '/':
        printf("Result = %.2f\n", a / b);
        break;
    }

    return 0;
}