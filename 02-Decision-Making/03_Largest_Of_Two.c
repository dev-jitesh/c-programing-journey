/*
Author : Jitesh
Project : Largest Number In Two Numbeers
*/

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Largest number is: %d\n", a);
    }

    else if (a < b)
    {
        printf("Largest number is: %d\n", b);
    }

    else
    {
        printf("Both are equal.\n");
    }

    return 0;
}