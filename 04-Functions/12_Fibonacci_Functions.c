/*
Project : Fibonacci Functions
Author : Jitesh
*/

#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    printf("%d\t%d\t", a, b);
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d\t", c);
    }
}

int main(void)
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}