/*
Project : Check Palindrome String
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        i++;
    }

    if (str[i - 1] == '\n')
    {
        str[i - 1] = '\0';
        i--;
    }

    int start = 0;
    int end = i - 1;
    int palindrome = 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (palindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}