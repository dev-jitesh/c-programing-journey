/*
Project : Frequency Of Characters In A String
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, j = 0, count = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\n')
    {
        i++;
    }
    if (str[i - 1] == '\n')
    {
        str[i - 1] = '\0';
    }

    i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '*')
        {
            continue;
        }
        count = 0;

        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '*';
            }
        }

        if (str[i] != '*')
        {
            printf("%c = %d\n", str[i], count + 1);
        }
    }

    return 0;
}