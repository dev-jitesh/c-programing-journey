/*
Author : Jitesh
Project : Sum of First N Natural Numbers
*/

#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("The sum is: %d", sum);

    return 0;
}