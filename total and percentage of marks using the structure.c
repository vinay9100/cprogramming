#include <stdio.h>
struct Student {
    char name[50];
    int rollno;
    float marks[5];
};
int main() {
    int i;
    float totalMarks = 0, percentage;
    struct Student student;
    printf("Enter name of the student: ");
    scanf("%s", student.name);
    printf("Enter roll no. of the student: ");
    scanf("%d", &student.rollno);
    printf("Enter marks of 5 subjects: \n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &student.marks[i]);
        totalMarks += student.marks[i];
    }
    percentage = totalMarks / 5;
    printf("\nName: %s\nRoll No.: %d\nTotal Marks: %.2f\nPercentage: %.2f%%\n", 
        student.name, student.rollno, totalMarks, percentage);
    return 0;
}
