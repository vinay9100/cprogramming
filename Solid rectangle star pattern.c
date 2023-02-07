
#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows & columns:\n");
    scanf("%d%d", &rows, &columns);

    printf("\n");
    if (rows > 0 && columns > 0) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= columns; j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}
