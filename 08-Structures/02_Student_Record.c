#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks1;
    float marks2;
    float marks3;
};

int main(void)
{
    struct Student s;

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &s.marks1, &s.marks2, &s.marks3);

    float total = s.marks1 + s.marks2 + s.marks3;
    float average = total / 3;

    printf("Student Record: \n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Total marks: %.2f\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}