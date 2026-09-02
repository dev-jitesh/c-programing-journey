#include <stdio.h>

int main(void)
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int minIndex;
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    
    printf("Sorted Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}