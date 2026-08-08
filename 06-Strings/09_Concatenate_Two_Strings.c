/*
Project : Concatinate Two Strings
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter any string: ");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\0')
    {
        i++;
    }
    if (str1[i - 1] == '\n')
    {
        str1[i - 1] = '\0';
        i--;
    }

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str2[j] != '\0')
    {
        j++;
    }
    if (str2[j - 1] == '\n')
    {
        str2[j - 1] = '\0';
        j--;
    }

    j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
    printf("%s", str1);

    return 0;
}