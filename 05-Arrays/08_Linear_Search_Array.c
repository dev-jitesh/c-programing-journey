/*
Project : Linear Search in an Array
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int i, search, found = 0;

    printf("Enter any 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (search == arr[i])
        {
            printf("number %d found at position: %d", search, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Number not found.");
    }
    return 0;
}