/*
Project : Largest Element in Array
Array : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];
    int largest, i;

    printf("Enter any 5 numbers:\n");

    scanf("%d", &arr[0]);
    largest = arr[0];

    for (i = 1; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest element is: %d", largest);

    return 0;
}