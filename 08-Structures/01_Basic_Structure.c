#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main(void)
{
    struct Student s1;

    printf("Enter name: ");
    scanf("%49s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("Student details: \n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("marks: %.2f\n", s1.marks);

    return 0;
}