#include <stdio.h>

void count(int n)
{
    if (n > 5)
    {
        return;
    }

    printf("%d ", n);

    count(n + 1);
}

int main(void)
{
    count(1);

    return 0;
}