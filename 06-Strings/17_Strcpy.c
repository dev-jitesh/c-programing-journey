/*
Author : Jitesh
Project : Using Strcpy
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[100];

    printf("Enter any string: ");
    fgets(str1, sizeof(str1), stdin);

    for (int i = 0; str1[i] = '\0'; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
        }
    }

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] = '\0'; i++)
    {
        if (str2[i] == '\n')
        {
            str2[i] = '\0';
        }
    }

    strcpy(str1, str2);

    printf("After copying: %s", str1);

    return 0;
}