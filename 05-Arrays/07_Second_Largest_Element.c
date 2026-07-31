/*
Project : Second Largest Element in Array
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int large1 = arr[0], large2 = arr[1], i;

    printf("Enter any 5 numbers:\n");
    scanf("%d", &arr[0]);
    large1 = arr[0];
    scanf("%d", &arr[1]);
    large2 = arr[1];

    for (i = 2; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > large1)
        {
            large2 = large1;
            large1 = arr[i];
        }
        else if (arr[i] > large2)
        {
            large2 = arr[i];
        }
    }

    printf("The second largest number is: %d", large2);

    return 0;
}