#include <stdio.h>

struct Student
{
    int studentID;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i, maxIndex = 0;

    /* Accept details of 5 students */
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Student ID: ");
        scanf("%d", &s[i].studentID);

        fflush(stdin);
        printf("Enter Student Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    /* Find student with highest marks */
    for(i = 1; i < 5; i++)
    {
        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    /* Display highest marks student */
    printf("\n\n--- Student Having Highest Marks ---");
    printf("\nStudent ID = %d", s[maxIndex].studentID);
    printf("\nStudent Name = %s", s[maxIndex].name);
    printf("\nMarks = %.2f", s[maxIndex].marks);

    return 0;
}