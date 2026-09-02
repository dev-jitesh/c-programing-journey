#include <stdio.h>

int main(void)
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key;
    int low = 0;
    int high = n - 1;
    int found = 0;

    printf("Array: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter number to search: ");
    scanf("%d", &key);

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}