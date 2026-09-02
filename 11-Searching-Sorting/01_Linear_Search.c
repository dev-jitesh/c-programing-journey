#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    int found = 0;

    printf("Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            return 0;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}