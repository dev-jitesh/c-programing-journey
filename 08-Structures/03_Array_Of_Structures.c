#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main(void)
{
    struct Student students[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter thr details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Records ---\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}