/*
Project : Break Continue
Author : Jitesh
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
            break;

        printf("%d\n", i);
    }
    printf("\n");

    for (int j = 1; j <= 10; j++)
    {
        if (j == 5)
            continue;

        printf("%d\n", j);
    }

    return 0;
}