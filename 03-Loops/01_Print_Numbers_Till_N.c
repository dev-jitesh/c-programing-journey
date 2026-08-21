/*
Author : Jitesh
Project : Printing Numbers Till N
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}