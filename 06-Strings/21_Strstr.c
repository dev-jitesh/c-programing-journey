/*
Author : Jitesh
Project : Using strstr to find substring
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char word[50];
    char *result;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = 0;
            break;
        }
    }

    printf("Enter a word to search: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    result = strstr(str, word);

    if (result != NULL)
    {
        printf("Substring found: %s\n", result);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}