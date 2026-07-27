/*
Project : Function Return Value
Author : Jitesh
*/

#include <stdio.h>

int getNumber(void)
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
    return num;
}

int main(void)
{
    int number;
    number = getNumber();

    printf("You entered: %d\n", number);

    return 0;
}