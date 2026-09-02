#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;

    arr = malloc(3 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("Before realloc:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    int *temp = realloc(arr, 5 * sizeof(int));

    if (temp == NULL)
    {
        printf("\nReallocation failed.\n");
        free(arr);
        return 1;
    }

    arr = temp;

    arr[3] = 40;
    arr[4] = 50;

    printf("\nAfter realloc:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}