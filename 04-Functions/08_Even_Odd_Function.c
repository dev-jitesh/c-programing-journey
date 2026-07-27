/*
Project : Even Odd Function
Author : Jitesh
*/

#include <stdio.h>

int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int num, result;
    printf("Enter any number: ");
    scanf("%d", &num);

    result = isEven(num);

    if (result)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}