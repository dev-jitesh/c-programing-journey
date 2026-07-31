/*
Project : Finding Duplicate Elements in an Array
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int i, j, found = 0;

    printf("Enter any 5 elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Duplicate Element: %d\n", arr[i]);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("No duplicate elements found.");
    }

    return 0;
}