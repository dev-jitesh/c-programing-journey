/*
Project : For Loop2
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t\n", i);
    }

    for (int j = 10; j >= 1; j--)
    {
        printf("%d\t\n", j);
    }

    for (int b = 1; b <= 10; b++)
    {
        int a = 7;
        printf("%d X %d = %d\n", a, b, a * b);
    }

    return 0;
}