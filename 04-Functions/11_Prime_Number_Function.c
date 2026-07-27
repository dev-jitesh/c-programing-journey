/*
Project : Prime Number Function
Autor : Jitesh
*/

#include <stdio.h>

int isPrime(int n)
{
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int num, result;
    printf("Enter any number: ");
    scanf("%d", &num);

    result = isPrime(num);

    if (result)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number.");
    }

    return 0;
}