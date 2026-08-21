/*
Author : Jitesh
Project : Palindrome Number
*/

#include <stdio.h>

int main(void)
{
    int n, original, reverse = 0, digit;

    printf("Enter any number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
    {
        printf("Number is palindrome.");
    }
    else
    {
        printf("Not a palindrome number.");
    }

    return 0;
}