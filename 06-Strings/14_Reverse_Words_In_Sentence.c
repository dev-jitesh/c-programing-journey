/*
Project : Reversing The Words In A Sentence
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, j = 0;

    printf("Enter any sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}