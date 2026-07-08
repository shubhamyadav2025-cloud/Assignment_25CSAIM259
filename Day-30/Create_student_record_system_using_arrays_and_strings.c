#include <stdio.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) 
    {
        printf("\nEnter Roll, Name, Marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\nStudent Records:\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}