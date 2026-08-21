/*
Author : Jitesh
Program : Printing numbers from N to 1
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = n; i <= n; i--)
    {
        printf("%d ", i);
    }

    return 0;
}