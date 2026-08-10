/*
Author : Jitesh
Project :
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[100];
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] == '\n')
        {
            str2[i] = '\0';
            break;
        }
    }

    strcat(str1, str2);

    printf("Combined string: %s", str1);

    return 0;
}
