/*
Author : Jitesh
Project : Divisible By 5 And 11
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 11 == 0)
    {
        printf("Divisible by both 5 and 11.");
    }
    else
    {
        printf("Not divisible by 5 and 11.");
    }

    return 0;
}