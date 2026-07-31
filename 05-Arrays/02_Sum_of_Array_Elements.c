/*
Project : Sum of Array Elements
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5], sum = 0;

    printf("Enter any 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("The sum of elements of array is: %d", sum);

    return 0;
}