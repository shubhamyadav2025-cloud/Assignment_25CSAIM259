#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n) 
{
    int i;
    printf("\nStudent Records:\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) 
    {
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

float average(struct Student s[], int n) 
{
    float sum = 0;
    int i;
    for(i = 0; i < n; i++)
        sum += s[i].marks;
    return sum / n;
}

int main() 
{
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter Roll, Name, Marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    display(s, 3);

    printf("\nAverage Marks = %.2f\n", average(s, 3));

    return 0;
}