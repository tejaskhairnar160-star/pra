#include <stdio.h>

struct Student
{
    int studentID;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    /* Accept student details */
    printf("Enter Student ID: ");
    scanf("%d", &s.studentID);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    /* Display student details */
    printf("\n--- Student Details ---");
    printf("\nStudent ID = %d", s.studentID);
    printf("\nStudent Name = %s", s.name);
    printf("\nMarks = %.2f", s.marks);

    return 0;
}