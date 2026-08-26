#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[50];
    int rollNo;
    struct Date dob;
};

int main(void)
{
    struct Student s;

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Date of Birth: %02d/%02d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}