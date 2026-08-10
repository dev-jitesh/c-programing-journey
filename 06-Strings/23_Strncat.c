/*
Project : Using strncat to concatinate specified characters
Author : Jitesh
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] == '\n')
        {
            str2[i] = '\0';
            break;
        }
    }

    strncat(str1, str2, 3);

    printf("Result: %s\n", str1);

    return 0;
}