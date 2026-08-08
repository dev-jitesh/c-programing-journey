/*
Project : Remove Duplicate Characters
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, j, k;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}