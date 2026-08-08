/*
Project : Converting to Uppercase
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
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase String: %s", str);

    return 0;
}