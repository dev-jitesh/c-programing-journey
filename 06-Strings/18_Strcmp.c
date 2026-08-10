/*
Author : Jitesh
Program : Comparing strings with strcmp
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
        }
    }

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] == '\n')
        {
            str2[i] = '\0';
        }
    }

    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are different");
    }

    return 0;
}