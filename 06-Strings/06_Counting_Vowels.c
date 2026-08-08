/*
Project : Counting Vowels
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }

        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }

        else if (str[i] == ' ')
        {
            spaces++;
        }

        else if ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of comsonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}