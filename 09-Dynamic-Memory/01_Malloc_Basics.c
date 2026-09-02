#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 50;

    printf("Value = %d\n", *ptr);

    free(ptr);

    return 0;
}