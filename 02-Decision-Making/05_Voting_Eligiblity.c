/*
Author : Jitesh
Project : Checking Voting Eligibility
*/

#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter your age: ");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not elegible to vote.");
    }

    return 0;
}