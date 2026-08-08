/*
Project : Remove Space From A String
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, j = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        i++;
    }
    if (str[i - 1] != '\n')
    {
        str[i - 1] = '\0';
    }

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}