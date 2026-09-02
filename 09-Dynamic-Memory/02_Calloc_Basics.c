#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;

    arr = (int *)calloc(5, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Initial values:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}