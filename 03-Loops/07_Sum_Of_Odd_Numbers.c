/*
Project : Printing Sum of Odd Numbers
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    printf("%d ", sum);

    return 0;
}