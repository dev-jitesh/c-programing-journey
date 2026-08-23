/*
Author ; Jitesh
Project : Finding if number is Positive Negative Or Zero
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Positive number.");
    }
    else if (n < 0)
    {
        printf("Negative number.");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}