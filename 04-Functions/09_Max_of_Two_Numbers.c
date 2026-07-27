/*
Project : Max of Two Numbers
Author : Jitesh
*/

#include <stdio.h>

int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    result = maximum(num1, num2);

    printf("The largest number is: %d", result);

    return 0;
}