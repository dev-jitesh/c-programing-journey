/*
Project : Count Words In A String
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
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
        if ((i = 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' '))
        {
            words++;
        }
        i++;
    }

    printf("Number of words: %d", words);

    return 0;
}