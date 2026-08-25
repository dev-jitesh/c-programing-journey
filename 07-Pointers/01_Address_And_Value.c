// addres of
// value at address (dereference)

#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Value stored in ptr = %p\n", (void *)ptr);
    printf("Value of pointed by ptr = %d\n", *ptr);

    return 0;
}