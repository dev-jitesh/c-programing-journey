/*
Project : Deleting an Element From Array
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int i, pos;
    printf("Enter any 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nPosition of number to delete (1-5): ");
    scanf("%d", &pos);

    for (i = pos - 1; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Updated array: ");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}