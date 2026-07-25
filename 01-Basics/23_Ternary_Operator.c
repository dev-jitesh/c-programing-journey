/*
Project : Ternary Operator
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Even") : printf("Odd");

    return 0;
}