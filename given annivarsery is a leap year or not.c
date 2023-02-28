#include <stdio.h>
int main() {
    int year, is_leap;
    printf("Enter the anniversary year: ");
    scanf("%d", &year);
    is_leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    if (is_leap) {
        printf("The next anniversary year is %d\n", year + 4);
    } else {
        printf("The previous anniversary year is %d\n", year - 4);
    }

    return 0;
}
