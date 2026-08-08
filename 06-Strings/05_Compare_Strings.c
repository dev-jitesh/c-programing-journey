/*
Project : omparing Two Strings
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter any string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0')
    {
        i++;
    }
    if (str1[i - 1] == '\n')
    {
        str1[i - 1] = '\0';
    }

    i = 0;
    while (str2[i] != '\0')
    {
        i++;
    }
    if (str2[i - 1] == '\n')
    {
        str2[i - 1] = '\0';
    }

    i = 0;
    int compare = 1;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            compare = 0;
            break;
        }
        i++;
    }

    if (str1[i] != str2[i])
    {
        compare = 0;
    }

    if (compare)
    {
        printf("The strings are equal.");
    }
    else
    {
        printf("The strings are not equal");
    }

    return 0;
}