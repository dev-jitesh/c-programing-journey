/*
Project : If Else Statement
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}