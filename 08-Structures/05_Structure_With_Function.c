#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

void displayStudent(struct Student s)
{
    printf("Student Details: \n");
    printf("Name: %49s\n", s.name);
    printf("Roll number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);
}

int main(void)
{
    struct Student s;

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    displayStudent(s);

    return 0;
}