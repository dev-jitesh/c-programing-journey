/*
Project : Switch Statement
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int choice;

    printf("Menu\n");
    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Pasta\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You selected pizza.");
        break;

    case 2:
        printf("You selected Burger.");
        break;

    case 3:
        printf("You selected Pasta.");
        break;

    default:
        printf("Invalid choice.");
        break;
    }

    return 0;
}