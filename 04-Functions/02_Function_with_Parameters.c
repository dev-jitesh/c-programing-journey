/*
Project : Functions with Parameters
Author : Jitesh
*/

#include <stdio.h>

void greet(char name[])
{
    printf("Hello %s\n", name);
    printf("Welcome to C Functions!");
}

int main()
{
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    greet(name);

    return 0;
}