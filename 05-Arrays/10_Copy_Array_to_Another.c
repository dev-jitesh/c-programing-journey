/*
Project : Copy One Array to Another
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr1[5], arr2[5];
    int i;

    printf("Enter any 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("Copied array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr2[i]);
    }

    return 0;
}