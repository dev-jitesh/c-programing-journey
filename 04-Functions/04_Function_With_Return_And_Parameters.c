/*
Project : Function with Return and Parameters
Authors : Jitesh
*/

#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main(void)
{
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = add(num1, num2);

    printf("The sum of numbers is: %d", sum);

    return 0;
}