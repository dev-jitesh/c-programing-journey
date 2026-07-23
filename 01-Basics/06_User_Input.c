/*
Project : User Input
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    char name[50];
    int age;
    float height;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);

    printf("----- Student Details -----\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);

    return 0;
}