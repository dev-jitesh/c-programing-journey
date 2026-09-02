#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main(void)
{
    struct Student *ptr;

    ptr = malloc(sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter name: ");
    scanf("%49s", ptr->name);

    printf("Enter Roll No: ");
    scanf("%d", &ptr->rollNo);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Marks: %.2f\n", ptr->marks);

    free(ptr);

    return 0;
}