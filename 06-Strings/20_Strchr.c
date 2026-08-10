/*
Project : Using strchr to find character in a string
Author : Jitesh
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char ch;
    char *result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = strchr(str, ch);

    if (result != NULL)
    {
        printf("Character found: %c\n", *result);
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}