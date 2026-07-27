/*
Program : Factorial Function
Author : Jitesh
*/

#include <stdio.h>

int Factorial(int n)
{
    int f = 1;
    for (int i = n; i >= 1; i--)
    {
        f = f * i;
    }

    return f;
}

int main(void)
{
    int num, result;
    printf("Enter number: ");
    scanf("%d", &num);

    result = Factorial(num);

    printf("The factorial is: %d", result);

    return 0;
}