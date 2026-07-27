/*
Project : Swap Two Numbers
Author : Jitesh
*/

#include <stdio.h>

void swap(int a, int b)
{
    int c;

    c = a;
    a = b;
    b = c;

    printf("Inside Function:\n");
    printf("First = %d\n", a);
    printf("Second = %d\n", b);
}

int main(void)
{
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping:\n");
    printf("First = %d\n", num1);
    printf("Second = %d\n", num2);

    swap(num1, num2);

    printf("After function call");
    printf("First = %d\n", num1);
    printf("Second = %d\n", num2);

    return 0;
}