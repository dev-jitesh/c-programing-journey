/*
Author : Jitesh
Project : Using strncpy
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }

    strncpy(str2, str1, 5);
    str2[5] = '\0';

    printf("Original string: %s\n", str1);
    printf("Copied 5 characters: %s", str2);

    return 0;
}