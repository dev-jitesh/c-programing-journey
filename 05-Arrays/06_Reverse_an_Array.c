/*
Project : Reversee an Array
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int i;

    printf("Enter any 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reversed: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
