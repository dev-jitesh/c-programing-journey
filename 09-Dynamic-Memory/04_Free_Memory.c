#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;

    arr = malloc(5 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    printf("Array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}