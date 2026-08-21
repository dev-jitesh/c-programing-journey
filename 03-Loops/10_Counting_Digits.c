/*
Author : Jitesh
Project : Counting The Digits In A Number
*/

#include <stdio.h>

int main(void)
{
    int n;
    int cnt = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }

    printf("Number of digits = %d", cnt);

    return 0;
}