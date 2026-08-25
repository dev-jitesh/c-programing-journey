#include <stdio.h>

void doubleValue(int *n)
{
    *n = *n * 2;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before: %d\n", num);

    doubleValue(&num);

    printf("After: %d\n", num);

    return 0;
}