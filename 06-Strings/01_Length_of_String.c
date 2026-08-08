/*
Project : Length of a string without strlen()
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        i++;
    }

    printf("Length of string = %d", i - 1);

    return 0;
}