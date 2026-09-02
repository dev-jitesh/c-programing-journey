#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;
    int sum = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    free(arr);

    return 0;
}