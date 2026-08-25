#include <stdio.h>

int main(void)
{
    int num = 10;

    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Value of num = %d\n", num);
    printf("Using ptr = %d\n", *ptr);
    printf("Using ptr2 = %d\n", **ptr2);

    return 0;
}