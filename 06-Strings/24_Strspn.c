/*
Author : Jitesh
Program : Using strspn
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char allowed[50];
    size_t count;

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

    printf("Enter allowed characters: ");
    fgets(allowed, sizeof(allowed), stdin);

    for (int i = 0; allowed[i] != '\0'; i++)
    {
        if (allowed[i] == '\n')
        {
            allowed[i] = '\0';
            break;
        }
    }

    count = strspn(str, allowed);

    printf("Characters from the beginning that match: %zu\n", count);

    return 0;
}