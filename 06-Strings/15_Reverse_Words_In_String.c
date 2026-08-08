/*
Project : Reversing Words In a Service
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, start, end;
    char temp;

    printf("Enter any senetnce: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        i++;
    }
    if (str[i - 1] == '\n')
    {
        str[i - 1] = '\0';
    }

    i = 0;

    while (str[i] != '\0')
    {
        start = i;

        while (str[i] != ' ' && str[i] != '\0')
        {
            i++;
        }

        end = i - 1;

        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }

        if (str[i] == ' ')
        {
            i++;
        }
    }
    printf("Result: %s", str);

    return 0;
}