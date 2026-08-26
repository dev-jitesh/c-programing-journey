#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main(void)
{
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Student Details\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Marks: %f\n", ptr->marks);

    return 0;
}