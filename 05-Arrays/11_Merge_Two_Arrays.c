/*
Project : Merge Two Arrays
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr1[5], arr2[5], arr3[10];
    int i;

    printf("Enter any 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter another 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
        arr3[i + 5] = arr2[i];
    }

    printf("Merged array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}