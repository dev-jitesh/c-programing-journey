/*
Author : Jitesh
Project : Factorial Of A Number
*/

#include <stdio.h>

int main(void)
{
    int n;
    int f = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        f = f * i;
    }

    printf("%d", f);

    return 0;
}