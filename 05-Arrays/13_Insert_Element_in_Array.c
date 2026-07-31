/*
Project : Insertinf an Element in Array
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[6];
    int i, num, pos;

    printf("Enter any 5 elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the number to insert: ");
    scanf("%d", &num);

    printf("Enter at which position to insert (1-6): ");
    scanf("%d", &pos);

    for (i = 4; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = num;

    printf("Updated array: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}