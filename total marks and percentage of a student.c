#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks[3];
    float percent;
};
void main()
{
    int i;
    struct student s[3];
    for (i = 0; i < 3; i++)
    {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the marks of student %d in three subjects: ", i + 1);
        scanf("%f%f%f", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
        s[i].percent = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3;
    }
    printf("\nRoll Number\tName\tMarks\tPercentage\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t\t%s\t%.2f\t%.2f\n", s[i].roll_no, s[i].name, s[i].marks[0] + s[i].marks[1] + s[i].marks[2], s[i].percent);
    }
}
