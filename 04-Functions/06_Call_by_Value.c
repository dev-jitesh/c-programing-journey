/*
Project : Call by Value
Author : Jitesh
*/

#include <stdio.h>

void changeNumber(int num)
{
    num = 100;
}

int main(void)
{
    int num = 10;
    printf("Before: %d\n", num);

    changeNumber(num);

    printf("After: %d\n", num);

    return 0;
}