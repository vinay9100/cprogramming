#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct student *ptr;
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    ptr = (struct student*) malloc(n * sizeof(struct student)); 
    if (ptr == NULL) {
        printf("Memory allocation failed!");
        exit(0);
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", (ptr + i)->name);
        printf("Roll number: ");
        scanf("%d", &(ptr + i)->roll_no);
        printf("Marks: ");
        scanf("%f", &(ptr + i)->marks);
    }
    printf("\n\nDetails of all students:\n\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Roll number: %d\n", (ptr + i)->roll_no);
        printf("Marks: %.2f\n", (ptr + i)->marks);
    }
    free(ptr);
    return 0;
}
