/*
Project : Counting Even & Odd Elements
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int even = 0, odd = 0;

    printf("Enter any 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
}