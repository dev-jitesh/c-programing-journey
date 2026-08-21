/*
Project : Printing Multiplication Tables
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}