/*
Project : Input & Display Array
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int arr[5];

    printf("Enter any 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The nubers entered are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}