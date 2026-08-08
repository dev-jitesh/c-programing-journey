/*
Project : Reverse a String
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter any string: ");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("Reversed String: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", str2[i]);
    }

    return 0;
}