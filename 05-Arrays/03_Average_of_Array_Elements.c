/*
Project : Average of Array Elements
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5], sum = 0, avg = 0;
    printf("Enter any 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / 5;
    printf("The average of elements of array is: %d", avg);

    return 0;
}