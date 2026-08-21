/*
Author : jitesh
Program : Reversing A Number
*/

#include <stdio.h>

int main(void)
{
    int n, reverse = 0, digit;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}