/*
Author : Jitesh
Project : Checking If Number Is Even Or Odd
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}