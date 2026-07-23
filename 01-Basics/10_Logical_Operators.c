/*
Project : Logical Operators
Author : Jitesh
*/

#include <stdio.h>

int main(void)
{
    int age = 18;
    int marks = 85;

    printf("age >= 18 && marks >= 40 = %d\n", age >= 18 && marks >= 40);
    printf("age < 18 && marks >= 40 = %d\n", age < 18 && marks >= 40);

    printf("age >= 18 || marks >= 40 = %d\n", age >= 18 || marks >= 40);
    printf("age < 18 || marks >= 40 = %d\n", age < 18 || marks >= 40);

    printf("!(age >= 18) = %d\n", !(age >= 18));
    printf("!(age >= 18) = %d\n", !(age >= 18));

    return 0;
}