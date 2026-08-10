/*
Author : Jitesh
Program : Using Strcspn
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char stop[50];
    size_t count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\0')
        {
            str[i] = '\n';
            break;
        }
    }

    printf("Enter stopping characters: ");
    fgets(stop, sizeof(stop), stdin);

    for (int i = 0; stop[i] != '\0'; i++)
    {
        if (stop[i] == '\0')
        {
            stop[i] = '\n';
            break;
        }
    }

    count = strcspn(str, stop);

    printf("Characters before the first match: %zu\n", count);

    return 0;
}