/*
Project : Smallest Number in Array
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int smallest = arr[0], i;

    printf("Enter any 5 numbers:\n");

    scanf("%d", &arr[0]);
    smallest = arr[0];

    for (i = 1; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("The smallest number is: %d", smallest);

    return 0;
}