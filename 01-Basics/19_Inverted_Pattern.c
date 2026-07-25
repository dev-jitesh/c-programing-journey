/*
Project : Inverted Pattern
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}