/*
Project : Sum of Digits
Author : Jitesh
*/

#include <stdio.h>

int sumofDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main(void)
{
    int result, num;
    printf("Enter any number: ");
    scanf("%d", &num);

    result = sumofDigits(num);

    printf("The sum of digits is: %d", result);

    return 0;
}