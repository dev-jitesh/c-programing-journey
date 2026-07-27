/*
Project : Function Prototype
Authors : Jitesh
*/

#include <stdio.h>

int add(int, int);

int main(void)
{
    int sum = add(6, 8);
    printf("%d", sum);
}

int add(int a, int b)
{
    return a + b;
}