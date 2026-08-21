/*
Author : Jitesh
Project : Sum Of Digits
*/

#include <stdio.h>

int main(void)
{
    int n, digits, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digits = n % 10;
        sum = sum + digits;
        n = n / 10;
    }

    printf("The sum of the digits is: %d", sum);

    return 0;
}